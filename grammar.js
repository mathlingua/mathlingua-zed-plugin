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

    // \name(.name)*(:label)*  e.g. \set, \closed.set, \function:on:to, \foo.$bar.baz
    command: $ => token(prec(2, seq(
      '\\',
      /[a-zA-Z_$][a-zA-Z0-9_$]*/,
      repeat(seq('.', /[a-zA-Z_$][a-zA-Z0-9_$]*/)),
      repeat(seq(':', /[a-zA-Z_$][a-zA-Z0-9_$]*/)),
    ))),

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

    // is / is_not (with optional trailing ?)
    is_op: $ => token(prec(2, choice(
      'is_not?',
      'is_not',
      'is?',
      'is',
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
