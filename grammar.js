module.exports = grammar({
  name: 'mathlingua',

  // `comment` is produced by the external scanner (src/scanner.c): a line is a
  // comment only when "--" is the first non-whitespace on the line. A "--" in
  // the middle of a line (e.g. `[x_ -- y_]`) is NOT a comment, which a plain
  // token regex cannot express because it has no start-of-line anchor.
  externals: $ => [$.comment],

  extras: $ => [/[ \t\r]+/],

  rules: {
    source_file: $ => repeat(choice($._token, $._newline)),

    _newline: $ => token(/\n/),

    _token: $ => choice(
      $.comment,
      $.bullet,
      $.string,
      $.backtick_op,
      $.type_command,
      $.command,
      $.alias_ref,
      $.person_ref,
      $.symbol_reference,
      $.magnetic_placeholder,
      $.placeholder,
      $.assign_op,
      $.is_op,
      $.header,
      $.number,
      $.operator,
      $.identifier,
      $._punct,
    ),

    bullet: $ => token(prec(3, /\.[ \t]/)),

    string: $ => choice(
      $.single_quote_string,
      $.triple_quote_string,
    ),

    single_quote_string: $ => seq(
      alias('"', $.string_delimiter),
      repeat(choice(
        $.escape_sequence,
        $.code_fence,
        $.mathlingua_display_fragment,
        $.mathlingua_inline_fragment,
        $.latex_display_math,
        $.latex_inline_math,
        $.latex_command,
        $.symbol_reference,
        $.variadic_template,
        $.backtick_op,
        $._string_text,
      )),
      alias('"', $.string_delimiter),
    ),

    triple_quote_string: $ => seq(
      alias(prec(3, '"""'), $.string_delimiter),
      repeat(choice(
        $.escape_sequence,
        $.code_fence,
        $.mathlingua_display_fragment,
        $.mathlingua_inline_fragment,
        $.latex_display_math,
        $.latex_inline_math,
        $.latex_command,
        $.symbol_reference,
        $.variadic_template,
        $.backtick_op,
        $._triple_string_text,
      )),
      alias(prec(3, '"""'), $.string_delimiter),
    ),

    code_fence: $ => token(prec(5, seq(
      '```',
      repeat(choice(
        /[^`\\]+/,
        /\\./,
        /`[^`]/,
        /``[^`]/,
      )),
      '```',
    ))),

    variadic_template: $ => token(prec(4, /\{(\{[^}]*\}|[^}\n\r])*\.\.\.(\{[^}]*\}|[^}\n\r])*\}/)),

    escape_sequence: $ => token(prec(3, '\\"')),

    mathlingua_display_fragment: $ => prec(2, seq(
      alias(prec(3, '{{.'), $.mathlingua_fragment_open),
      repeat(choice($._token, $._newline)),
      alias(prec(3, '.}}'), $.mathlingua_fragment_close),
      optional($.relation_modifier),
    )),

    mathlingua_inline_fragment: $ => prec(1, seq(
      alias(prec(2, '{.'), $.mathlingua_fragment_open),
      repeat(choice($._token, $._newline)),
      alias(prec(2, '.}'), $.mathlingua_fragment_close),
      optional($.relation_modifier),
    )),

    relation_modifier: $ => seq(
      '[',
      repeat(choice(
        $.string,
        $.escaped_string,
        $.operator,
        $.identifier,
        '=',
      )),
      ']',
    ),

    escaped_string: $ => seq(
      alias('\\"', $.string_delimiter),
      repeat(/[^"\\\n\r]+/),
      alias('\\"', $.string_delimiter),
    ),

    latex_display_math: $ => prec(4, seq(
      alias(prec(4, '$$'), $.latex_math_delimiter),
      repeat($._latex_item),
      alias(prec(4, '$$'), $.latex_math_delimiter),
    )),

    latex_inline_math: $ => prec(3, seq(
      alias(prec(3, '$'), $.latex_math_delimiter),
      repeat($._latex_item),
      alias(prec(3, '$'), $.latex_math_delimiter),
    )),

    _latex_item: $ => choice(
      $.latex_command,
      $.latex_group,
      $.latex_prime,
      $.latex_superscript,
      $.latex_subscript,
      $.symbol_reference,
      $.number,
      $.operator,
      $.identifier,
      $._latex_punct,
      $._latex_text,
    ),

    latex_prime: $ => token(prec(2, /'+/)),

    latex_command: $ => token(prec(2, seq(
      '\\',
      choice(
        /[a-zA-Z]+/,
        /[^a-zA-Z \t\r\n]/,
      ),
    ))),

    latex_group: $ => seq(
      '{',
      repeat($._latex_item),
      '}',
    ),

    latex_superscript: $ => token('^'),
    latex_subscript: $ => token('_'),

    _latex_punct: $ => choice(
      '(', ')', '[', ']', ',', '.', ';', ':',
    ),

    _latex_text: $ => token(prec(-1, choice(
      /[^$\\^_{}()\[\],.;:a-zA-Z0-9 \t\r\n]+/,
      /[ \t\r\n]+/,
      '}',
    ))),

    symbol_reference: $ => token(prec(3, seq(
      choice(
        /[a-zA-Z][a-zA-Z0-9_]*(\+|-)?\?/,
        /[!%^&*+\-=|<>/~]+(_[a-zA-Z][a-zA-Z0-9_]*)?(\+|-)?\?/,
      ),
      optional(choice(
        /\{(\{[^}]*\}|[^}\n\r])*\.\.\.(\{[^}]*\}|[^}\n\r])*\}/,
      )),
    ))),

    _string_text: $ => token(prec(-1, choice(
      /[^"$\\{\n\r \t]+/,
      /[ \t\r\n]+/,
      '{',
      '\\',
    ))),

    _triple_string_text: $ => token(prec(-1, choice(
      /[^"$\\{\n\r \t]+/,
      /[ \t\r\n]+/,
      '"',
      '""',
      '{',
      '\\',
    ))),

    // `*+`  backtick-quoted operator name (used where an identifier is expected)
    backtick_op: $ => token(prec(3, /`[^`\n]+`/)),

    // \\name(:label)*  e.g. \\type, \\forAll, \\forAll:suchThat
    type_command: $ => token(prec(3, seq(
      '\\\\',
      /[a-zA-Z_][a-zA-Z0-9_]*/,
      repeat(seq(':', /[a-zA-Z_][a-zA-Z0-9_]*/)),
    ))),

    // \name(.name)* head (also handles infix forms like \.set.=./ and
    // \:map.$alias.=={A}:to{B}:/), followed by zero or more :label or :?label
    // suffixes and optional immediate {…} / (…) argument blocks, with an
    // optional ./ or :/ closer. Split into sub-nodes so the ":" / ":?" marker
    // can be highlighted separately from the label name.
    command: $ => prec.right(seq(
      choice($.command_head, $.refined_command_head),
      repeat(choice(
        $.command_label,
        $.command_brace_args,
        $.command_paren_args,
        $.command_cast,
      )),
      optional($.command_close),
    )),

    command_cast: $ => prec(2, seq(
      token.immediate('@'),
      $.command_brace_args,
    )),

    // Refined command header: \(part, …)::target  e.g.
    //   \(injective)::function
    //   \(continuous, bounded)::function:on{A}:to{B}
    // The "\(" opener, each part name and the target name read as command
    // names; the "::" separator is plain punctuation. The colon-tail
    // (:on{A}:to{B}) reuses the ordinary command_label / *_args machinery.
    // The rarely-used dotted-prefix form \a.b.(…)::… is not specially
    // highlighted (its prefix tokenises as an ordinary command head).
    refined_command_head: $ => seq(
      $.refined_open,
      $.command_name,
      repeat(seq(',', $.command_name)),
      ')',
      $.refined_separator,
      choice(
        $.command_name,
        seq('[[', choice($.command_name, $.identifier), ']]'),
      ),
    ),

    // "\(" opener for a refined command header.
    refined_open: $ => token(prec(3, '\\(')),

    // "::" separator between the part list and the refined target.
    refined_separator: $ => token.immediate(prec(3, '::')),

    // A part name or the refined target name (optionally dotted).
    command_name: $ => token(/[a-zA-Z_$][a-zA-Z0-9_$]*(\.[a-zA-Z_$][a-zA-Z0-9_$]*)*/),

    // Name segments may be identifiers (incl. $alias) or operator runs (==, +,
    // *, etc.). "/" is deliberately NOT in the operator class so that the
    // ./ and :/ closers stay parseable.
    command_head: $ => token(prec(2, seq(
      '\\',
      optional(choice('.', ':')),
      choice(
        /[a-zA-Z_$][a-zA-Z0-9_$]*/,
        /[!%^&*+\-=|<>~]+/,
      ),
      repeat(seq(
        '.',
        choice(
          /[a-zA-Z_$][a-zA-Z0-9_$]*/,
          /[!%^&*+\-=|<>~]+/,
        ),
      )),
    ))),

    command_close: $ => token.immediate(prec(3, choice(':/', './', '?:/'))),

    command_label: $ => seq(
      $.command_label_marker,
      $.command_label_name,
    ),

    command_label_marker: $ => token.immediate(prec(2, choice(':?', ':', '#'))),
    command_label_name: $ => token.immediate(/[a-zA-Z_$][a-zA-Z0-9_$]*/),

    command_brace_args: $ => prec(2, seq(
      token.immediate('{'),
      repeat($._token),
      '}',
    )),

    command_paren_args: $ => prec(2, seq(
      token.immediate('('),
      repeat($._token),
      ')',
    )),

    // $name or $`op`  alias reference (with optional dotted chain)
    alias_ref: $ => token(prec(2, /\$([a-zA-Z_][a-zA-Z0-9_]*|`[^`\n]+`)(\.([a-zA-Z_][a-zA-Z0-9_]*|`[^`\n]+`))*/)),

    // @name or @`op`  person/resource reference
    person_ref: $ => token(prec(2, /@([a-zA-Z_][a-zA-Z0-9_]*|`[^`\n]+`)(\.([a-zA-Z_][a-zA-Z0-9_]*|`[^`\n]+`))*/)),

    // x__   y_1__   magnetic placeholder
    magnetic_placeholder: $ => token(prec(3, /[a-zA-Z][a-zA-Z0-9_]*__/)),

    // x_    y_1_   placeholder
    placeholder: $ => token(prec(2, choice(
      /_+/,
      /[a-zA-Z][a-zA-Z0-9_]*_/,
    ))),

    // structural assignment / mapping operators (longest first matters less
    // because tree-sitter does longest-match for token strings)
    assign_op: $ => token(prec(2, choice(
      '::=',
      ':=:',
      ':=',
      ':->',
      '|->',
      '->',
    ))),

    // in-expression keywords: is / is_not / via / member_of (with optional trailing ?)
    is_op: $ => token(prec(2, choice(
      'is_not?',
      'is_not',
      'is?',
      'is',
      'via',
      'member_of',
    ))),

    // Header keyword followed by a colon, e.g. Describes:, when:, forAll:
    header: $ => token(prec(1, /[a-zA-Z][a-zA-Z0-9_]*:/)),

    number: $ => token(/[0-9]+(\.[0-9]+)?/),

    // operator names, possibly with a subscript like *_name or primes like *'
    operator: $ => token(/[!%^&*+\-=|<>/~]+(_[a-zA-Z][a-zA-Z0-9_]*)?'*/),

    identifier: $ => token(/[a-zA-Z][a-zA-Z0-9_]*'*/),

    _punct: $ => choice(
      '(', ')', '{', '}', '[', ']',
      ',', ':', ';', '.', '?', '|', '/', '\\', '\'',
    ),
  },
});
