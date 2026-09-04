; Lines starting with "--" are comments.
(comment) @comment

; Section / sub-section headers like "Describes:", "when:", "forAll:".
(header) @keyword

; "is", "is_not", "is?", "is_not?", "via", "member_of"  -> in-expression keywords,
; intentionally a different colour from @keyword section headers (Describes:, etc.).
(is_op) @operator

; List bullet ". " at the start of a clause / item.
(bullet) @punctuation.list_marker

; \name, \name.path  -> command head; and label names like `on` in :?on or #given.
; Infix command forms like \.set.=./ and \:map.$alias.=={…}:/ get the same
; styling so the operator name reads consistently with prefix commands.
(command_head) @function.builtin
(command_label_name) @function.builtin

; The ":", ":?", or "#" between a command and its label name renders as plain punctuation.
(command_label_marker) @punctuation

; Refined command header: \(injective)::function, \(continuous, bounded)::function.
; The "\(" opener and every part / target name read like a command name; the
; "::" separator is plain punctuation.
(refined_open) @function.builtin
(command_name) @function.builtin
(refined_separator) @punctuation

; The ./ or :/ closer on infix commands shares the command styling.
(command_close) @function.builtin

; \\type, \\statement, \\forAll:suchThat -> special "type" commands
(type_command) @type

; $alias  -> references to an introduced alias / writing target
(alias_ref) @variable.special

; @author  -> references to a Person / Resource
(person_ref) @variable.special

; Symbol references: A?, A+?, A-?, x_?, +?, *?, x?{...}, etc.
(symbol_reference) @variable.special
(variadic_template) @variable.special

; x_  and  x__   placeholder / magnetic-placeholder names
(placeholder) @variable.parameter
(magnetic_placeholder) @variable.parameter

; Identifiers (variables like x, y, A, B in formulation and LaTeX)
(identifier) @variable

; "...", """...""", `*+`
(string) @string
(escaped_string) @string
(string_delimiter) @punctuation.delimiter
(escape_sequence) @string.escape
(code_fence) @text.literal
(backtick_op) @string.special

; Mathlingua formulation fragments: {. ... .} and {{. ... .}}
(mathlingua_fragment_open) @punctuation.special
(mathlingua_fragment_close) @punctuation.special

; LaTeX math blocks: $ ... $ and $$ ... $$
(latex_math_delimiter) @punctuation.special
(latex_command) @function.builtin
(latex_superscript) @operator
(latex_subscript) @operator
(latex_prime) @operator

; Numbers
(number) @number

; ::=, :=, :->, |->, ->, and arbitrary operator runs
(assign_op) @operator
(operator) @operator

; Punctuation
[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

[
  ","
  ":"
  ";"
] @punctuation.delimiter

[
  "."
  "?"
  "|"
  "/"
  "\\"
] @punctuation
