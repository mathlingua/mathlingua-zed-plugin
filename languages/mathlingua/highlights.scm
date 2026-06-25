; Section / sub-section headers like "Describes:", "when:", "forAll:".
(header) @keyword

; "is", "is_not", "is?", "is_not?", "via", "member_of"  -> in-expression keywords,
; intentionally a different colour from @keyword section headers (Describes:, etc.).
(is_op) @operator

; List bullet ". " at the start of a clause / item.
(bullet) @punctuation.list_marker

; \name, \name.path  -> command head; and label names like `on` in :?on.
; Infix command forms like \.set.=./ and \:map.$alias.=={…}:/ get the same
; styling so the operator name reads consistently with prefix commands.
(command_head) @function.builtin
(command_label_name) @function.builtin

; The ":" or ":?" between a command and its label name renders as plain punctuation.
(command_label_marker) @punctuation

; The ./ or :/ closer on infix commands shares the command styling.
(command_close) @function.builtin

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
