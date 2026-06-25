; Section / sub-section headers like "Describes:", "when:", "forAll:".
(header) @keyword

; "is", "is_not", "is?", "is_not?"
(is_op) @keyword.operator

; List bullet ". " at the start of a clause / item.
(bullet) @punctuation.list_marker

; \name, \name.path  -> command head, plus same color on label names like `on` in :?on
(command_head) @function
(command_label_name) @function

; The ":" or ":?" between a command and its label name renders as plain punctuation.
(command_label_marker) @punctuation

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
