#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_bullet = 2,
  sym_string = 3,
  sym_backtick_op = 4,
  sym_type_command = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  sym_refined_open = 8,
  sym_refined_separator = 9,
  sym_command_name = 10,
  sym_command_head = 11,
  sym_command_close = 12,
  sym_command_label_marker = 13,
  sym_command_label_name = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LPAREN = 17,
  sym_alias_ref = 18,
  sym_person_ref = 19,
  sym_magnetic_placeholder = 20,
  sym_placeholder = 21,
  sym_assign_op = 22,
  sym_is_op = 23,
  sym_header = 24,
  sym_number = 25,
  sym_operator = 26,
  sym_identifier = 27,
  anon_sym_LPAREN2 = 28,
  anon_sym_LBRACE2 = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_COLON = 32,
  anon_sym_SEMI = 33,
  anon_sym_DOT = 34,
  anon_sym_QMARK = 35,
  anon_sym_PIPE = 36,
  anon_sym_SLASH = 37,
  anon_sym_BSLASH = 38,
  sym_source_file = 39,
  sym__token = 40,
  sym_command = 41,
  sym_refined_command_head = 42,
  sym_command_label = 43,
  sym_command_brace_args = 44,
  sym_command_paren_args = 45,
  sym__punct = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_command_repeat1 = 48,
  aux_sym_refined_command_head_repeat1 = 49,
  aux_sym_command_brace_args_repeat1 = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_bullet] = "bullet",
  [sym_string] = "string",
  [sym_backtick_op] = "backtick_op",
  [sym_type_command] = "type_command",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_refined_open] = "refined_open",
  [sym_refined_separator] = "refined_separator",
  [sym_command_name] = "command_name",
  [sym_command_head] = "command_head",
  [sym_command_close] = "command_close",
  [sym_command_label_marker] = "command_label_marker",
  [sym_command_label_name] = "command_label_name",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [sym_alias_ref] = "alias_ref",
  [sym_person_ref] = "person_ref",
  [sym_magnetic_placeholder] = "magnetic_placeholder",
  [sym_placeholder] = "placeholder",
  [sym_assign_op] = "assign_op",
  [sym_is_op] = "is_op",
  [sym_header] = "header",
  [sym_number] = "number",
  [sym_operator] = "operator",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_LBRACE2] = "{",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [anon_sym_QMARK] = "\?",
  [anon_sym_PIPE] = "|",
  [anon_sym_SLASH] = "/",
  [anon_sym_BSLASH] = "\\",
  [sym_source_file] = "source_file",
  [sym__token] = "_token",
  [sym_command] = "command",
  [sym_refined_command_head] = "refined_command_head",
  [sym_command_label] = "command_label",
  [sym_command_brace_args] = "command_brace_args",
  [sym_command_paren_args] = "command_paren_args",
  [sym__punct] = "_punct",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_refined_command_head_repeat1] = "refined_command_head_repeat1",
  [aux_sym_command_brace_args_repeat1] = "command_brace_args_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__newline] = sym__newline,
  [sym_bullet] = sym_bullet,
  [sym_string] = sym_string,
  [sym_backtick_op] = sym_backtick_op,
  [sym_type_command] = sym_type_command,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_refined_open] = sym_refined_open,
  [sym_refined_separator] = sym_refined_separator,
  [sym_command_name] = sym_command_name,
  [sym_command_head] = sym_command_head,
  [sym_command_close] = sym_command_close,
  [sym_command_label_marker] = sym_command_label_marker,
  [sym_command_label_name] = sym_command_label_name,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [sym_alias_ref] = sym_alias_ref,
  [sym_person_ref] = sym_person_ref,
  [sym_magnetic_placeholder] = sym_magnetic_placeholder,
  [sym_placeholder] = sym_placeholder,
  [sym_assign_op] = sym_assign_op,
  [sym_is_op] = sym_is_op,
  [sym_header] = sym_header,
  [sym_number] = sym_number,
  [sym_operator] = sym_operator,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_LBRACE2] = anon_sym_LBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_source_file] = sym_source_file,
  [sym__token] = sym__token,
  [sym_command] = sym_command,
  [sym_refined_command_head] = sym_refined_command_head,
  [sym_command_label] = sym_command_label,
  [sym_command_brace_args] = sym_command_brace_args,
  [sym_command_paren_args] = sym_command_paren_args,
  [sym__punct] = sym__punct,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_refined_command_head_repeat1] = aux_sym_refined_command_head_repeat1,
  [aux_sym_command_brace_args_repeat1] = aux_sym_command_brace_args_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_bullet] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_backtick_op] = {
    .visible = true,
    .named = true,
  },
  [sym_type_command] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_refined_open] = {
    .visible = true,
    .named = true,
  },
  [sym_refined_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command_head] = {
    .visible = true,
    .named = true,
  },
  [sym_command_close] = {
    .visible = true,
    .named = true,
  },
  [sym_command_label_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_command_label_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_alias_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_person_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_magnetic_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_op] = {
    .visible = true,
    .named = true,
  },
  [sym_is_op] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_refined_command_head] = {
    .visible = true,
    .named = true,
  },
  [sym_command_label] = {
    .visible = true,
    .named = true,
  },
  [sym_command_brace_args] = {
    .visible = true,
    .named = true,
  },
  [sym_command_paren_args] = {
    .visible = true,
    .named = true,
  },
  [sym__punct] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_refined_command_head_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_brace_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
};

static TSCharacterRange sym_operator_character_set_1[] = {
  {'!', '!'}, {'%', '&'}, {'*', '+'}, {'-', '-'}, {'/', '/'}, {'<', '>'}, {'^', '^'}, {'|', '|'},
  {'~', '~'},
};

static TSCharacterRange sym_operator_character_set_2[] = {
  {'!', '!'}, {'%', '&'}, {'*', '+'}, {'-', '-'}, {'/', '/'}, {'<', '>'}, {'^', '_'}, {'|', '|'},
  {'~', '~'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '"', 1,
        '(', 57,
        ')', 32,
        ',', 31,
        '-', 89,
        '.', 124,
        '/', 129,
        ':', 40,
        ';', 123,
        '?', 127,
        '@', 10,
        '[', 120,
        '\\', 130,
        ']', 121,
        '`', 18,
        'i', 50,
        'm', 43,
        'v', 46,
        '{', 55,
        '|', 128,
        '}', 56,
        '$', 54,
        '_', 54,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '`') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 14:
      if ((set_contains(sym_operator_character_set_1, 9, lookahead)) &&
          lookahead != '/') ADVANCE(36);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 15:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 16:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '"', 1,
        '$', 11,
        '(', 57,
        ')', 32,
        ',', 31,
        '-', 89,
        '.', 124,
        '/', 129,
        ':', 40,
        ';', 123,
        '?', 127,
        '@', 10,
        '[', 120,
        '\\', 130,
        ']', 121,
        '`', 18,
        'i', 101,
        'm', 94,
        'v', 97,
        '{', 55,
        '|', 128,
        '}', 56,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '"', 1,
        '$', 11,
        '(', 118,
        ')', 32,
        ',', 31,
        '-', 89,
        '.', 125,
        '/', 129,
        ':', 122,
        ';', 123,
        '?', 126,
        '@', 10,
        '[', 120,
        '\\', 130,
        ']', 121,
        '`', 18,
        'i', 101,
        'm', 94,
        'v', 97,
        '{', 119,
        '|', 128,
        '}', 56,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '"', 1,
        '(', 118,
        ')', 32,
        ',', 31,
        '-', 89,
        '.', 125,
        '/', 129,
        ':', 122,
        ';', 123,
        '?', 126,
        '@', 10,
        '[', 120,
        '\\', 130,
        ']', 121,
        '`', 18,
        'i', 114,
        'm', 107,
        'v', 110,
        '{', 119,
        '|', 128,
        '}', 56,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_backtick_op);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_type_command);
      if (lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_refined_open);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_refined_separator);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_command_head);
      if (lookahead == '.') ADVANCE(14);
      if ((set_contains(sym_operator_character_set_1, 9, lookahead)) &&
          lookahead != '/') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_command_head);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_command_close);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_command_label_marker);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_command_label_marker);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(75);
      if (lookahead == '?') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 's') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_alias_ref);
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_alias_ref);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_person_ref);
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_person_ref);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_magnetic_placeholder);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_magnetic_placeholder);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_magnetic_placeholder);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_assign_op);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_assign_op);
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_is_op);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(76);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_header);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '>', 74,
        '_', 15,
        '!', 90,
        '%', 90,
        '&', 90,
        '*', 90,
        '+', 90,
        '-', 90,
        '/', 90,
        '<', 90,
        '=', 90,
        '^', 90,
        '|', 90,
        '~', 90,
      );
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '_') ADVANCE(15);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'f') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 's') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '_') ADVANCE(15);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(15);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(90);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(14);
      if ((set_contains(sym_operator_character_set_1, 9, lookahead)) &&
          lookahead != '/') ADVANCE(36);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_bullet] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_backtick_op] = ACTIONS(1),
    [sym_type_command] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_refined_open] = ACTIONS(1),
    [sym_command_head] = ACTIONS(1),
    [sym_command_close] = ACTIONS(1),
    [sym_command_label_marker] = ACTIONS(1),
    [sym_command_label_name] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [sym_person_ref] = ACTIONS(1),
    [sym_magnetic_placeholder] = ACTIONS(1),
    [sym_placeholder] = ACTIONS(1),
    [sym_assign_op] = ACTIONS(1),
    [sym_is_op] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_operator] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_LBRACE2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(32),
    [sym__token] = STATE(5),
    [sym_command] = STATE(5),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__newline] = ACTIONS(5),
    [sym_bullet] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [sym_backtick_op] = ACTIONS(5),
    [sym_type_command] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [sym_refined_open] = ACTIONS(7),
    [sym_command_head] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(5),
    [sym_alias_ref] = ACTIONS(5),
    [sym_person_ref] = ACTIONS(5),
    [sym_magnetic_placeholder] = ACTIONS(5),
    [sym_placeholder] = ACTIONS(11),
    [sym_assign_op] = ACTIONS(5),
    [sym_is_op] = ACTIONS(11),
    [sym_header] = ACTIONS(11),
    [sym_number] = ACTIONS(5),
    [sym_operator] = ACTIONS(11),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_LPAREN2] = ACTIONS(5),
    [anon_sym_LBRACE2] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_DOT] = ACTIONS(11),
    [anon_sym_QMARK] = ACTIONS(5),
    [anon_sym_PIPE] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(11),
  },
  [2] = {
    [sym_command_label] = STATE(4),
    [sym_command_brace_args] = STATE(4),
    [sym_command_paren_args] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym__newline] = ACTIONS(13),
    [sym_bullet] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_backtick_op] = ACTIONS(13),
    [sym_type_command] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [sym_refined_open] = ACTIONS(13),
    [sym_command_head] = ACTIONS(13),
    [sym_command_close] = ACTIONS(15),
    [sym_command_label_marker] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_alias_ref] = ACTIONS(13),
    [sym_person_ref] = ACTIONS(13),
    [sym_magnetic_placeholder] = ACTIONS(13),
    [sym_placeholder] = ACTIONS(23),
    [sym_assign_op] = ACTIONS(13),
    [sym_is_op] = ACTIONS(23),
    [sym_header] = ACTIONS(23),
    [sym_number] = ACTIONS(13),
    [sym_operator] = ACTIONS(23),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_LPAREN2] = ACTIONS(23),
    [anon_sym_LBRACE2] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_QMARK] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_BSLASH] = ACTIONS(23),
  },
  [3] = {
    [sym_command_label] = STATE(3),
    [sym_command_brace_args] = STATE(3),
    [sym_command_paren_args] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym__newline] = ACTIONS(25),
    [sym_bullet] = ACTIONS(25),
    [sym_string] = ACTIONS(25),
    [sym_backtick_op] = ACTIONS(25),
    [sym_type_command] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(25),
    [sym_refined_open] = ACTIONS(25),
    [sym_command_head] = ACTIONS(25),
    [sym_command_close] = ACTIONS(25),
    [sym_command_label_marker] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(30),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_alias_ref] = ACTIONS(25),
    [sym_person_ref] = ACTIONS(25),
    [sym_magnetic_placeholder] = ACTIONS(25),
    [sym_placeholder] = ACTIONS(36),
    [sym_assign_op] = ACTIONS(25),
    [sym_is_op] = ACTIONS(36),
    [sym_header] = ACTIONS(36),
    [sym_number] = ACTIONS(25),
    [sym_operator] = ACTIONS(36),
    [sym_identifier] = ACTIONS(36),
    [anon_sym_LPAREN2] = ACTIONS(36),
    [anon_sym_LBRACE2] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(36),
    [anon_sym_SEMI] = ACTIONS(25),
    [anon_sym_DOT] = ACTIONS(36),
    [anon_sym_QMARK] = ACTIONS(36),
    [anon_sym_PIPE] = ACTIONS(36),
    [anon_sym_SLASH] = ACTIONS(36),
    [anon_sym_BSLASH] = ACTIONS(36),
  },
  [4] = {
    [sym_command_label] = STATE(3),
    [sym_command_brace_args] = STATE(3),
    [sym_command_paren_args] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
    [sym_bullet] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
    [sym_backtick_op] = ACTIONS(38),
    [sym_type_command] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
    [sym_refined_open] = ACTIONS(38),
    [sym_command_head] = ACTIONS(38),
    [sym_command_close] = ACTIONS(40),
    [sym_command_label_marker] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(21),
    [sym_alias_ref] = ACTIONS(38),
    [sym_person_ref] = ACTIONS(38),
    [sym_magnetic_placeholder] = ACTIONS(38),
    [sym_placeholder] = ACTIONS(42),
    [sym_assign_op] = ACTIONS(38),
    [sym_is_op] = ACTIONS(42),
    [sym_header] = ACTIONS(42),
    [sym_number] = ACTIONS(38),
    [sym_operator] = ACTIONS(42),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(42),
    [anon_sym_LBRACE2] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_COLON] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(42),
    [anon_sym_QMARK] = ACTIONS(42),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_BSLASH] = ACTIONS(42),
  },
  [5] = {
    [sym__token] = STATE(6),
    [sym_command] = STATE(6),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym__newline] = ACTIONS(46),
    [sym_bullet] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [sym_backtick_op] = ACTIONS(46),
    [sym_type_command] = ACTIONS(46),
    [anon_sym_COMMA] = ACTIONS(46),
    [anon_sym_RPAREN] = ACTIONS(46),
    [sym_refined_open] = ACTIONS(7),
    [sym_command_head] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(46),
    [sym_alias_ref] = ACTIONS(46),
    [sym_person_ref] = ACTIONS(46),
    [sym_magnetic_placeholder] = ACTIONS(46),
    [sym_placeholder] = ACTIONS(48),
    [sym_assign_op] = ACTIONS(46),
    [sym_is_op] = ACTIONS(48),
    [sym_header] = ACTIONS(48),
    [sym_number] = ACTIONS(46),
    [sym_operator] = ACTIONS(48),
    [sym_identifier] = ACTIONS(48),
    [anon_sym_LPAREN2] = ACTIONS(46),
    [anon_sym_LBRACE2] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(46),
    [anon_sym_RBRACK] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(46),
    [anon_sym_DOT] = ACTIONS(48),
    [anon_sym_QMARK] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(48),
    [anon_sym_SLASH] = ACTIONS(48),
    [anon_sym_BSLASH] = ACTIONS(48),
  },
  [6] = {
    [sym__token] = STATE(6),
    [sym_command] = STATE(6),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym__newline] = ACTIONS(52),
    [sym_bullet] = ACTIONS(52),
    [sym_string] = ACTIONS(52),
    [sym_backtick_op] = ACTIONS(52),
    [sym_type_command] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(52),
    [sym_refined_open] = ACTIONS(55),
    [sym_command_head] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(52),
    [sym_alias_ref] = ACTIONS(52),
    [sym_person_ref] = ACTIONS(52),
    [sym_magnetic_placeholder] = ACTIONS(52),
    [sym_placeholder] = ACTIONS(61),
    [sym_assign_op] = ACTIONS(52),
    [sym_is_op] = ACTIONS(61),
    [sym_header] = ACTIONS(61),
    [sym_number] = ACTIONS(52),
    [sym_operator] = ACTIONS(61),
    [sym_identifier] = ACTIONS(61),
    [anon_sym_LPAREN2] = ACTIONS(52),
    [anon_sym_LBRACE2] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_COLON] = ACTIONS(61),
    [anon_sym_SEMI] = ACTIONS(52),
    [anon_sym_DOT] = ACTIONS(61),
    [anon_sym_QMARK] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(61),
    [anon_sym_SLASH] = ACTIONS(61),
    [anon_sym_BSLASH] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym__newline] = ACTIONS(64),
    [sym_bullet] = ACTIONS(64),
    [sym_string] = ACTIONS(64),
    [sym_backtick_op] = ACTIONS(64),
    [sym_type_command] = ACTIONS(64),
    [anon_sym_COMMA] = ACTIONS(64),
    [anon_sym_RPAREN] = ACTIONS(64),
    [sym_refined_open] = ACTIONS(64),
    [sym_command_head] = ACTIONS(64),
    [sym_command_close] = ACTIONS(64),
    [sym_command_label_marker] = ACTIONS(66),
    [anon_sym_LBRACE] = ACTIONS(64),
    [anon_sym_RBRACE] = ACTIONS(64),
    [anon_sym_LPAREN] = ACTIONS(64),
    [sym_alias_ref] = ACTIONS(64),
    [sym_person_ref] = ACTIONS(64),
    [sym_magnetic_placeholder] = ACTIONS(64),
    [sym_placeholder] = ACTIONS(66),
    [sym_assign_op] = ACTIONS(64),
    [sym_is_op] = ACTIONS(66),
    [sym_header] = ACTIONS(66),
    [sym_number] = ACTIONS(64),
    [sym_operator] = ACTIONS(66),
    [sym_identifier] = ACTIONS(66),
    [anon_sym_LPAREN2] = ACTIONS(66),
    [anon_sym_LBRACE2] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(64),
    [anon_sym_RBRACK] = ACTIONS(64),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(64),
    [anon_sym_DOT] = ACTIONS(66),
    [anon_sym_QMARK] = ACTIONS(66),
    [anon_sym_PIPE] = ACTIONS(66),
    [anon_sym_SLASH] = ACTIONS(66),
    [anon_sym_BSLASH] = ACTIONS(66),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym__newline] = ACTIONS(68),
    [sym_bullet] = ACTIONS(68),
    [sym_string] = ACTIONS(68),
    [sym_backtick_op] = ACTIONS(68),
    [sym_type_command] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
    [sym_refined_open] = ACTIONS(68),
    [sym_command_head] = ACTIONS(68),
    [sym_command_close] = ACTIONS(68),
    [sym_command_label_marker] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_RBRACE] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(68),
    [sym_alias_ref] = ACTIONS(68),
    [sym_person_ref] = ACTIONS(68),
    [sym_magnetic_placeholder] = ACTIONS(68),
    [sym_placeholder] = ACTIONS(70),
    [sym_assign_op] = ACTIONS(68),
    [sym_is_op] = ACTIONS(70),
    [sym_header] = ACTIONS(70),
    [sym_number] = ACTIONS(68),
    [sym_operator] = ACTIONS(70),
    [sym_identifier] = ACTIONS(70),
    [anon_sym_LPAREN2] = ACTIONS(70),
    [anon_sym_LBRACE2] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(70),
    [anon_sym_QMARK] = ACTIONS(70),
    [anon_sym_PIPE] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_BSLASH] = ACTIONS(70),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym__newline] = ACTIONS(72),
    [sym_bullet] = ACTIONS(72),
    [sym_string] = ACTIONS(72),
    [sym_backtick_op] = ACTIONS(72),
    [sym_type_command] = ACTIONS(72),
    [anon_sym_COMMA] = ACTIONS(72),
    [anon_sym_RPAREN] = ACTIONS(72),
    [sym_refined_open] = ACTIONS(72),
    [sym_command_head] = ACTIONS(72),
    [sym_command_close] = ACTIONS(72),
    [sym_command_label_marker] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(72),
    [anon_sym_RBRACE] = ACTIONS(72),
    [anon_sym_LPAREN] = ACTIONS(72),
    [sym_alias_ref] = ACTIONS(72),
    [sym_person_ref] = ACTIONS(72),
    [sym_magnetic_placeholder] = ACTIONS(72),
    [sym_placeholder] = ACTIONS(74),
    [sym_assign_op] = ACTIONS(72),
    [sym_is_op] = ACTIONS(74),
    [sym_header] = ACTIONS(74),
    [sym_number] = ACTIONS(72),
    [sym_operator] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
    [anon_sym_LPAREN2] = ACTIONS(74),
    [anon_sym_LBRACE2] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_COLON] = ACTIONS(74),
    [anon_sym_SEMI] = ACTIONS(72),
    [anon_sym_DOT] = ACTIONS(74),
    [anon_sym_QMARK] = ACTIONS(74),
    [anon_sym_PIPE] = ACTIONS(74),
    [anon_sym_SLASH] = ACTIONS(74),
    [anon_sym_BSLASH] = ACTIONS(74),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym__newline] = ACTIONS(76),
    [sym_bullet] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [sym_backtick_op] = ACTIONS(76),
    [sym_type_command] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [sym_refined_open] = ACTIONS(76),
    [sym_command_head] = ACTIONS(76),
    [sym_command_close] = ACTIONS(76),
    [sym_command_label_marker] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(76),
    [sym_alias_ref] = ACTIONS(76),
    [sym_person_ref] = ACTIONS(76),
    [sym_magnetic_placeholder] = ACTIONS(76),
    [sym_placeholder] = ACTIONS(78),
    [sym_assign_op] = ACTIONS(76),
    [sym_is_op] = ACTIONS(78),
    [sym_header] = ACTIONS(78),
    [sym_number] = ACTIONS(76),
    [sym_operator] = ACTIONS(78),
    [sym_identifier] = ACTIONS(78),
    [anon_sym_LPAREN2] = ACTIONS(78),
    [anon_sym_LBRACE2] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(78),
    [anon_sym_SEMI] = ACTIONS(76),
    [anon_sym_DOT] = ACTIONS(78),
    [anon_sym_QMARK] = ACTIONS(78),
    [anon_sym_PIPE] = ACTIONS(78),
    [anon_sym_SLASH] = ACTIONS(78),
    [anon_sym_BSLASH] = ACTIONS(78),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym__newline] = ACTIONS(80),
    [sym_bullet] = ACTIONS(80),
    [sym_string] = ACTIONS(80),
    [sym_backtick_op] = ACTIONS(80),
    [sym_type_command] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [sym_refined_open] = ACTIONS(80),
    [sym_command_head] = ACTIONS(80),
    [sym_command_close] = ACTIONS(80),
    [sym_command_label_marker] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_LPAREN] = ACTIONS(80),
    [sym_alias_ref] = ACTIONS(80),
    [sym_person_ref] = ACTIONS(80),
    [sym_magnetic_placeholder] = ACTIONS(80),
    [sym_placeholder] = ACTIONS(82),
    [sym_assign_op] = ACTIONS(80),
    [sym_is_op] = ACTIONS(82),
    [sym_header] = ACTIONS(82),
    [sym_number] = ACTIONS(80),
    [sym_operator] = ACTIONS(82),
    [sym_identifier] = ACTIONS(82),
    [anon_sym_LPAREN2] = ACTIONS(82),
    [anon_sym_LBRACE2] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(82),
    [anon_sym_SEMI] = ACTIONS(80),
    [anon_sym_DOT] = ACTIONS(82),
    [anon_sym_QMARK] = ACTIONS(82),
    [anon_sym_PIPE] = ACTIONS(82),
    [anon_sym_SLASH] = ACTIONS(82),
    [anon_sym_BSLASH] = ACTIONS(82),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym__newline] = ACTIONS(84),
    [sym_bullet] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym_backtick_op] = ACTIONS(84),
    [sym_type_command] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [sym_refined_open] = ACTIONS(84),
    [sym_command_head] = ACTIONS(84),
    [sym_command_close] = ACTIONS(84),
    [sym_command_label_marker] = ACTIONS(86),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_LPAREN] = ACTIONS(84),
    [sym_alias_ref] = ACTIONS(84),
    [sym_person_ref] = ACTIONS(84),
    [sym_magnetic_placeholder] = ACTIONS(84),
    [sym_placeholder] = ACTIONS(86),
    [sym_assign_op] = ACTIONS(84),
    [sym_is_op] = ACTIONS(86),
    [sym_header] = ACTIONS(86),
    [sym_number] = ACTIONS(84),
    [sym_operator] = ACTIONS(86),
    [sym_identifier] = ACTIONS(86),
    [anon_sym_LPAREN2] = ACTIONS(86),
    [anon_sym_LBRACE2] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(86),
    [anon_sym_SEMI] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(86),
    [anon_sym_PIPE] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_BSLASH] = ACTIONS(86),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym__newline] = ACTIONS(88),
    [sym_bullet] = ACTIONS(88),
    [sym_string] = ACTIONS(88),
    [sym_backtick_op] = ACTIONS(88),
    [sym_type_command] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [sym_refined_open] = ACTIONS(88),
    [sym_command_head] = ACTIONS(88),
    [sym_command_close] = ACTIONS(88),
    [sym_command_label_marker] = ACTIONS(90),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_LPAREN] = ACTIONS(88),
    [sym_alias_ref] = ACTIONS(88),
    [sym_person_ref] = ACTIONS(88),
    [sym_magnetic_placeholder] = ACTIONS(88),
    [sym_placeholder] = ACTIONS(90),
    [sym_assign_op] = ACTIONS(88),
    [sym_is_op] = ACTIONS(90),
    [sym_header] = ACTIONS(90),
    [sym_number] = ACTIONS(88),
    [sym_operator] = ACTIONS(90),
    [sym_identifier] = ACTIONS(90),
    [anon_sym_LPAREN2] = ACTIONS(90),
    [anon_sym_LBRACE2] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(90),
    [anon_sym_SEMI] = ACTIONS(88),
    [anon_sym_DOT] = ACTIONS(90),
    [anon_sym_QMARK] = ACTIONS(90),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_SLASH] = ACTIONS(90),
    [anon_sym_BSLASH] = ACTIONS(90),
  },
  [14] = {
    [sym__token] = STATE(15),
    [sym_command] = STATE(15),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(15),
    [aux_sym_command_brace_args_repeat1] = STATE(15),
    [sym_bullet] = ACTIONS(92),
    [sym_string] = ACTIONS(92),
    [sym_backtick_op] = ACTIONS(92),
    [sym_type_command] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [sym_refined_open] = ACTIONS(7),
    [sym_command_head] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(94),
    [sym_alias_ref] = ACTIONS(92),
    [sym_person_ref] = ACTIONS(92),
    [sym_magnetic_placeholder] = ACTIONS(92),
    [sym_placeholder] = ACTIONS(96),
    [sym_assign_op] = ACTIONS(92),
    [sym_is_op] = ACTIONS(96),
    [sym_header] = ACTIONS(96),
    [sym_number] = ACTIONS(92),
    [sym_operator] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_LPAREN2] = ACTIONS(92),
    [anon_sym_LBRACE2] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [15] = {
    [sym__token] = STATE(15),
    [sym_command] = STATE(15),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(15),
    [aux_sym_command_brace_args_repeat1] = STATE(15),
    [sym_bullet] = ACTIONS(98),
    [sym_string] = ACTIONS(98),
    [sym_backtick_op] = ACTIONS(98),
    [sym_type_command] = ACTIONS(98),
    [anon_sym_COMMA] = ACTIONS(98),
    [anon_sym_RPAREN] = ACTIONS(98),
    [sym_refined_open] = ACTIONS(101),
    [sym_command_head] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(98),
    [sym_alias_ref] = ACTIONS(98),
    [sym_person_ref] = ACTIONS(98),
    [sym_magnetic_placeholder] = ACTIONS(98),
    [sym_placeholder] = ACTIONS(107),
    [sym_assign_op] = ACTIONS(98),
    [sym_is_op] = ACTIONS(107),
    [sym_header] = ACTIONS(107),
    [sym_number] = ACTIONS(98),
    [sym_operator] = ACTIONS(107),
    [sym_identifier] = ACTIONS(107),
    [anon_sym_LPAREN2] = ACTIONS(98),
    [anon_sym_LBRACE2] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(98),
    [anon_sym_RBRACK] = ACTIONS(98),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_SEMI] = ACTIONS(98),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(107),
  },
  [16] = {
    [sym__token] = STATE(18),
    [sym_command] = STATE(18),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(18),
    [aux_sym_command_brace_args_repeat1] = STATE(18),
    [sym_bullet] = ACTIONS(110),
    [sym_string] = ACTIONS(110),
    [sym_backtick_op] = ACTIONS(110),
    [sym_type_command] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(112),
    [sym_refined_open] = ACTIONS(7),
    [sym_command_head] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(110),
    [sym_alias_ref] = ACTIONS(110),
    [sym_person_ref] = ACTIONS(110),
    [sym_magnetic_placeholder] = ACTIONS(110),
    [sym_placeholder] = ACTIONS(114),
    [sym_assign_op] = ACTIONS(110),
    [sym_is_op] = ACTIONS(114),
    [sym_header] = ACTIONS(114),
    [sym_number] = ACTIONS(110),
    [sym_operator] = ACTIONS(114),
    [sym_identifier] = ACTIONS(114),
    [anon_sym_LPAREN2] = ACTIONS(110),
    [anon_sym_LBRACE2] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(114),
    [anon_sym_SEMI] = ACTIONS(110),
    [anon_sym_DOT] = ACTIONS(114),
    [anon_sym_QMARK] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_BSLASH] = ACTIONS(114),
  },
  [17] = {
    [sym__token] = STATE(14),
    [sym_command] = STATE(14),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(14),
    [aux_sym_command_brace_args_repeat1] = STATE(14),
    [sym_bullet] = ACTIONS(116),
    [sym_string] = ACTIONS(116),
    [sym_backtick_op] = ACTIONS(116),
    [sym_type_command] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [sym_refined_open] = ACTIONS(7),
    [sym_command_head] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(118),
    [sym_alias_ref] = ACTIONS(116),
    [sym_person_ref] = ACTIONS(116),
    [sym_magnetic_placeholder] = ACTIONS(116),
    [sym_placeholder] = ACTIONS(120),
    [sym_assign_op] = ACTIONS(116),
    [sym_is_op] = ACTIONS(120),
    [sym_header] = ACTIONS(120),
    [sym_number] = ACTIONS(116),
    [sym_operator] = ACTIONS(120),
    [sym_identifier] = ACTIONS(120),
    [anon_sym_LPAREN2] = ACTIONS(116),
    [anon_sym_LBRACE2] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(116),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SEMI] = ACTIONS(116),
    [anon_sym_DOT] = ACTIONS(120),
    [anon_sym_QMARK] = ACTIONS(116),
    [anon_sym_PIPE] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_BSLASH] = ACTIONS(120),
  },
  [18] = {
    [sym__token] = STATE(15),
    [sym_command] = STATE(15),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(15),
    [aux_sym_command_brace_args_repeat1] = STATE(15),
    [sym_bullet] = ACTIONS(92),
    [sym_string] = ACTIONS(92),
    [sym_backtick_op] = ACTIONS(92),
    [sym_type_command] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(122),
    [sym_refined_open] = ACTIONS(7),
    [sym_command_head] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_alias_ref] = ACTIONS(92),
    [sym_person_ref] = ACTIONS(92),
    [sym_magnetic_placeholder] = ACTIONS(92),
    [sym_placeholder] = ACTIONS(96),
    [sym_assign_op] = ACTIONS(92),
    [sym_is_op] = ACTIONS(96),
    [sym_header] = ACTIONS(96),
    [sym_number] = ACTIONS(92),
    [sym_operator] = ACTIONS(96),
    [sym_identifier] = ACTIONS(96),
    [anon_sym_LPAREN2] = ACTIONS(92),
    [anon_sym_LBRACE2] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(92),
    [anon_sym_DOT] = ACTIONS(96),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_BSLASH] = ACTIONS(96),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym__newline] = ACTIONS(124),
    [sym_bullet] = ACTIONS(124),
    [sym_string] = ACTIONS(124),
    [sym_backtick_op] = ACTIONS(124),
    [sym_type_command] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_refined_open] = ACTIONS(124),
    [sym_command_head] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [sym_alias_ref] = ACTIONS(124),
    [sym_person_ref] = ACTIONS(124),
    [sym_magnetic_placeholder] = ACTIONS(124),
    [sym_placeholder] = ACTIONS(126),
    [sym_assign_op] = ACTIONS(124),
    [sym_is_op] = ACTIONS(126),
    [sym_header] = ACTIONS(126),
    [sym_number] = ACTIONS(124),
    [sym_operator] = ACTIONS(126),
    [sym_identifier] = ACTIONS(126),
    [anon_sym_LPAREN2] = ACTIONS(124),
    [anon_sym_LBRACE2] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(126),
    [anon_sym_SEMI] = ACTIONS(124),
    [anon_sym_DOT] = ACTIONS(126),
    [anon_sym_QMARK] = ACTIONS(124),
    [anon_sym_PIPE] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_BSLASH] = ACTIONS(126),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym__newline] = ACTIONS(38),
    [sym_bullet] = ACTIONS(38),
    [sym_string] = ACTIONS(38),
    [sym_backtick_op] = ACTIONS(38),
    [sym_type_command] = ACTIONS(38),
    [anon_sym_COMMA] = ACTIONS(38),
    [anon_sym_RPAREN] = ACTIONS(38),
    [sym_refined_open] = ACTIONS(38),
    [sym_command_head] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(38),
    [sym_alias_ref] = ACTIONS(38),
    [sym_person_ref] = ACTIONS(38),
    [sym_magnetic_placeholder] = ACTIONS(38),
    [sym_placeholder] = ACTIONS(42),
    [sym_assign_op] = ACTIONS(38),
    [sym_is_op] = ACTIONS(42),
    [sym_header] = ACTIONS(42),
    [sym_number] = ACTIONS(38),
    [sym_operator] = ACTIONS(42),
    [sym_identifier] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(38),
    [anon_sym_LBRACE2] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(38),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_COLON] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(38),
    [anon_sym_DOT] = ACTIONS(42),
    [anon_sym_QMARK] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(42),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_BSLASH] = ACTIONS(42),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_refined_command_head_repeat1,
  [10] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_refined_command_head_repeat1,
  [20] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_refined_command_head_repeat1,
  [30] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [35] = 1,
    ACTIONS(139), 1,
      sym_command_label_name,
  [39] = 1,
    ACTIONS(141), 1,
      sym_command_name,
  [43] = 1,
    ACTIONS(143), 1,
      sym_refined_separator,
  [47] = 1,
    ACTIONS(145), 1,
      sym_command_name,
  [51] = 1,
    ACTIONS(147), 1,
      sym_refined_separator,
  [55] = 1,
    ACTIONS(149), 1,
      sym_command_name,
  [59] = 1,
    ACTIONS(151), 1,
      sym_command_name,
  [63] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 10,
  [SMALL_STATE(23)] = 20,
  [SMALL_STATE(24)] = 30,
  [SMALL_STATE(25)] = 35,
  [SMALL_STATE(26)] = 39,
  [SMALL_STATE(27)] = 43,
  [SMALL_STATE(28)] = 47,
  [SMALL_STATE(29)] = 51,
  [SMALL_STATE(30)] = 55,
  [SMALL_STATE(31)] = 59,
  [SMALL_STATE(32)] = 63,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_label, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_label, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refined_command_head, 6, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refined_command_head, 6, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refined_command_head, 5, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refined_command_head, 5, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_paren_args, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_paren_args, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_brace_args, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_brace_args, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_brace_args, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_brace_args, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_paren_args, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_paren_args, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refined_command_head_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_refined_command_head_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mathlingua(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
