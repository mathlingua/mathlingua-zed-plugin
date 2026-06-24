; Section / sub-section headers like "Describes:", "when:", "forAll:".
(header) @keyword

; "is", "is_not", "is?", "is_not?"
(is_op) @keyword.operator

; List bullet ". " at the start of a clause / item.
(bullet) @punctuation.list_marker

; \name, \name.path, \name:label  -> commands invoke definitions
(command) @function

; \\type, \\statement, \\forAll:suchThat -> special "type" commands
(type_command) @type

; $alias  -> references to an introduced alias / writing target
(alias_ref) @variable.special

; @author  -> references to a Person / Resource
(person_ref) @variable.special

; x_  and  x__   placeholder / magnetic-placeholder names
(placeholder) @variable.parameter
(magnetic_placeholder) @variable.parameter

; "...", `*+`
(string) @string
(backtick_op) @string.special

; numbers
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
