module.exports = grammar({
  name: 'mathlingua',

  extras: $ => [/[ \t\r]+/],

  rules: {
    source_file: $ => repeat(choice($._token, $._newline)),

    _newline: $ => token(/\n/),

    _token: $ => choice(
      $.bullet,
      $.string,
      $.backtick_op,
      $.type_command,
      $.command,
      $.alias_ref,
      $.person_ref,
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

    string: $ => token(seq(
      '"',
      repeat(choice(/[^"\\\n]/, /\\./)),
      '"',
    )),

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
      $.command_head,
      repeat(choice(
        $.command_label,
        $.command_brace_args,
        $.command_paren_args,
      )),
      optional($.command_close),
    )),

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

    command_close: $ => token.immediate(prec(3, choice(':/', './', '?:/', '?./'))),

    command_label: $ => seq(
      $.command_label_marker,
      $.command_label_name,
    ),

    command_label_marker: $ => token.immediate(prec(2, choice(':?', ':'))),
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
    placeholder: $ => token(prec(2, /[a-zA-Z][a-zA-Z0-9_]*_/)),

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

    // operator names, possibly with a subscript like *_name
    operator: $ => token(/[!%^&*+\-=|<>/~]+(_[a-zA-Z][a-zA-Z0-9_]*)?/),

    identifier: $ => token(/[a-zA-Z][a-zA-Z0-9_]*/),

    _punct: $ => choice(
      '(', ')', '{', '}', '[', ']',
      ',', ':', ';', '.', '?', '|', '/', '\\',
    ),
  },
});
