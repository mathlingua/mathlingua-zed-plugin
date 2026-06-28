#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__newline = 1,
  sym_comment = 2,
  sym_bullet = 3,
  sym_string = 4,
  sym_backtick_op = 5,
  sym_type_command = 6,
  anon_sym_COMMA = 7,
  anon_sym_RPAREN = 8,
  sym_refined_open = 9,
  sym_refined_separator = 10,
  sym_command_name = 11,
  sym_command_head = 12,
  sym_command_close = 13,
  sym_command_label_marker = 14,
  sym_command_label_name = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_LPAREN = 18,
  sym_alias_ref = 19,
  sym_person_ref = 20,
  sym_magnetic_placeholder = 21,
  sym_placeholder = 22,
  sym_assign_op = 23,
  sym_is_op = 24,
  sym_header = 25,
  sym_number = 26,
  sym_operator = 27,
  sym_identifier = 28,
  anon_sym_LPAREN2 = 29,
  anon_sym_LBRACE2 = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_COLON = 33,
  anon_sym_SEMI = 34,
  anon_sym_DOT = 35,
  anon_sym_QMARK = 36,
  anon_sym_PIPE = 37,
  anon_sym_SLASH = 38,
  anon_sym_BSLASH = 39,
  sym_source_file = 40,
  sym__token = 41,
  sym_command = 42,
  sym_refined_command_head = 43,
  sym_command_label = 44,
  sym_command_brace_args = 45,
  sym_command_paren_args = 46,
  sym__punct = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_command_repeat1 = 49,
  aux_sym_refined_command_head_repeat1 = 50,
  aux_sym_command_brace_args_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__newline] = "_newline",
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
    .visible = true,
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
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 28,
        '"', 1,
        '(', 63,
        ')', 38,
        ',', 37,
        '-', 95,
        '.', 131,
        '/', 136,
        ':', 46,
        ';', 130,
        '?', 134,
        '@', 13,
        '[', 127,
        '\\', 137,
        ']', 128,
        '`', 20,
        'i', 56,
        'm', 49,
        'v', 52,
        '{', 61,
        '|', 135,
        '}', 62,
        '$', 60,
        '_', 60,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == '`') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '`') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 16:
      if ((set_contains(sym_operator_character_set_1, 9, lookahead)) &&
          lookahead != '/') ADVANCE(42);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 17:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 18:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '`') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 28,
        '"', 1,
        '$', 14,
        '(', 63,
        ')', 38,
        ',', 37,
        '-', 95,
        '.', 131,
        '/', 136,
        ':', 46,
        ';', 130,
        '?', 134,
        '@', 13,
        '[', 127,
        '\\', 137,
        ']', 128,
        '`', 20,
        'i', 108,
        'm', 101,
        'v', 104,
        '{', 61,
        '|', 135,
        '}', 62,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 28,
        '"', 1,
        '$', 14,
        '(', 125,
        ')', 38,
        ',', 37,
        '-', 95,
        '.', 132,
        '/', 136,
        ':', 129,
        ';', 130,
        '?', 133,
        '@', 13,
        '[', 127,
        '\\', 137,
        ']', 128,
        '`', 20,
        'i', 108,
        'm', 101,
        'v', 104,
        '{', 126,
        '|', 135,
        '}', 62,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '\n', 28,
        '"', 1,
        '(', 125,
        ')', 38,
        ',', 37,
        '-', 95,
        '.', 132,
        '/', 136,
        ':', 129,
        ';', 130,
        '?', 133,
        '@', 13,
        '[', 127,
        '\\', 137,
        ']', 128,
        '`', 20,
        'i', 121,
        'm', 114,
        'v', 117,
        '{', 126,
        '|', 135,
        '}', 62,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('<' <= lookahead && lookahead <= '>') ||
          lookahead == '^' ||
          lookahead == '~') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__newline);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '_') ADVANCE(30);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_comment);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_bullet);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_backtick_op);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_type_command);
      if (lookahead == ':') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_refined_open);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_refined_separator);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_command_head);
      if (lookahead == '.') ADVANCE(16);
      if ((set_contains(sym_operator_character_set_1, 9, lookahead)) &&
          lookahead != '/') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_command_head);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_command_close);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_command_label_marker);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_command_label_marker);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '?') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'b') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'm') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_command_label_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_alias_ref);
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_alias_ref);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_person_ref);
      if (lookahead == '.') ADVANCE(13);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_person_ref);
      if (lookahead == '.') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_magnetic_placeholder);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_magnetic_placeholder);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_magnetic_placeholder);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'n') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_placeholder);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_assign_op);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_assign_op);
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_is_op);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '?') ADVANCE(82);
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_is_op);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_header);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '-', 29,
        '>', 80,
        '_', 17,
        '!', 97,
        '%', 97,
        '&', 97,
        '*', 97,
        '+', 97,
        '/', 97,
        '<', 97,
        '=', 97,
        '^', 97,
        '|', 97,
        '~', 97,
      );
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_operator);
      ADVANCE_MAP(
        '>', 80,
        '_', 17,
        '!', 97,
        '%', 97,
        '&', 97,
        '*', 97,
        '+', 97,
        '-', 97,
        '/', 97,
        '<', 97,
        '=', 97,
        '^', 97,
        '|', 97,
        '~', 97,
      );
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_operator);
      if (lookahead == '_') ADVANCE(17);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_operator);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'f') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'm') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 's') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'a') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'b') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'm') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 's') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE2);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(6);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '_') ADVANCE(17);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(97);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '_') ADVANCE(17);
      if (set_contains(sym_operator_character_set_2, 9, lookahead)) ADVANCE(97);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(16);
      if ((set_contains(sym_operator_character_set_1, 9, lookahead)) &&
          lookahead != '/') ADVANCE(42);
      if (lookahead == '$' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
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
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_backtick_op] = ACTIONS(7),
    [sym_type_command] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(7),
    [sym_refined_open] = ACTIONS(9),
    [sym_command_head] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(7),
    [sym_alias_ref] = ACTIONS(7),
    [sym_person_ref] = ACTIONS(7),
    [sym_magnetic_placeholder] = ACTIONS(7),
    [sym_placeholder] = ACTIONS(13),
    [sym_assign_op] = ACTIONS(7),
    [sym_is_op] = ACTIONS(13),
    [sym_header] = ACTIONS(13),
    [sym_number] = ACTIONS(7),
    [sym_operator] = ACTIONS(13),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LPAREN2] = ACTIONS(7),
    [anon_sym_LBRACE2] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(7),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_QMARK] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_BSLASH] = ACTIONS(13),
  },
  [2] = {
    [sym_command_label] = STATE(4),
    [sym_command_brace_args] = STATE(4),
    [sym_command_paren_args] = STATE(4),
    [aux_sym_command_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__newline] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(15),
    [sym_string] = ACTIONS(15),
    [sym_backtick_op] = ACTIONS(15),
    [sym_type_command] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_refined_open] = ACTIONS(15),
    [sym_command_head] = ACTIONS(15),
    [sym_command_close] = ACTIONS(17),
    [sym_command_label_marker] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_alias_ref] = ACTIONS(15),
    [sym_person_ref] = ACTIONS(15),
    [sym_magnetic_placeholder] = ACTIONS(15),
    [sym_placeholder] = ACTIONS(25),
    [sym_assign_op] = ACTIONS(15),
    [sym_is_op] = ACTIONS(25),
    [sym_header] = ACTIONS(25),
    [sym_number] = ACTIONS(15),
    [sym_operator] = ACTIONS(25),
    [sym_identifier] = ACTIONS(25),
    [anon_sym_LPAREN2] = ACTIONS(25),
    [anon_sym_LBRACE2] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_DOT] = ACTIONS(25),
    [anon_sym_QMARK] = ACTIONS(25),
    [anon_sym_PIPE] = ACTIONS(25),
    [anon_sym_SLASH] = ACTIONS(25),
    [anon_sym_BSLASH] = ACTIONS(25),
  },
  [3] = {
    [sym_command_label] = STATE(3),
    [sym_command_brace_args] = STATE(3),
    [sym_command_paren_args] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__newline] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_backtick_op] = ACTIONS(27),
    [sym_type_command] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [sym_refined_open] = ACTIONS(27),
    [sym_command_head] = ACTIONS(27),
    [sym_command_close] = ACTIONS(27),
    [sym_command_label_marker] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(32),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(35),
    [sym_alias_ref] = ACTIONS(27),
    [sym_person_ref] = ACTIONS(27),
    [sym_magnetic_placeholder] = ACTIONS(27),
    [sym_placeholder] = ACTIONS(38),
    [sym_assign_op] = ACTIONS(27),
    [sym_is_op] = ACTIONS(38),
    [sym_header] = ACTIONS(38),
    [sym_number] = ACTIONS(27),
    [sym_operator] = ACTIONS(38),
    [sym_identifier] = ACTIONS(38),
    [anon_sym_LPAREN2] = ACTIONS(38),
    [anon_sym_LBRACE2] = ACTIONS(38),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(38),
    [anon_sym_SEMI] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(38),
    [anon_sym_QMARK] = ACTIONS(38),
    [anon_sym_PIPE] = ACTIONS(38),
    [anon_sym_SLASH] = ACTIONS(38),
    [anon_sym_BSLASH] = ACTIONS(38),
  },
  [4] = {
    [sym_command_label] = STATE(3),
    [sym_command_brace_args] = STATE(3),
    [sym_command_paren_args] = STATE(3),
    [aux_sym_command_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym__newline] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(40),
    [sym_string] = ACTIONS(40),
    [sym_backtick_op] = ACTIONS(40),
    [sym_type_command] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [sym_refined_open] = ACTIONS(40),
    [sym_command_head] = ACTIONS(40),
    [sym_command_close] = ACTIONS(42),
    [sym_command_label_marker] = ACTIONS(19),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(23),
    [sym_alias_ref] = ACTIONS(40),
    [sym_person_ref] = ACTIONS(40),
    [sym_magnetic_placeholder] = ACTIONS(40),
    [sym_placeholder] = ACTIONS(44),
    [sym_assign_op] = ACTIONS(40),
    [sym_is_op] = ACTIONS(44),
    [sym_header] = ACTIONS(44),
    [sym_number] = ACTIONS(40),
    [sym_operator] = ACTIONS(44),
    [sym_identifier] = ACTIONS(44),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_LBRACE2] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_QMARK] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(44),
  },
  [5] = {
    [sym__token] = STATE(6),
    [sym_command] = STATE(6),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym__newline] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(48),
    [sym_string] = ACTIONS(48),
    [sym_backtick_op] = ACTIONS(48),
    [sym_type_command] = ACTIONS(48),
    [anon_sym_COMMA] = ACTIONS(48),
    [anon_sym_RPAREN] = ACTIONS(48),
    [sym_refined_open] = ACTIONS(9),
    [sym_command_head] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(48),
    [sym_alias_ref] = ACTIONS(48),
    [sym_person_ref] = ACTIONS(48),
    [sym_magnetic_placeholder] = ACTIONS(48),
    [sym_placeholder] = ACTIONS(50),
    [sym_assign_op] = ACTIONS(48),
    [sym_is_op] = ACTIONS(50),
    [sym_header] = ACTIONS(50),
    [sym_number] = ACTIONS(48),
    [sym_operator] = ACTIONS(50),
    [sym_identifier] = ACTIONS(50),
    [anon_sym_LPAREN2] = ACTIONS(48),
    [anon_sym_LBRACE2] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_COLON] = ACTIONS(50),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_DOT] = ACTIONS(50),
    [anon_sym_QMARK] = ACTIONS(48),
    [anon_sym_PIPE] = ACTIONS(50),
    [anon_sym_SLASH] = ACTIONS(50),
    [anon_sym_BSLASH] = ACTIONS(50),
  },
  [6] = {
    [sym__token] = STATE(6),
    [sym_command] = STATE(6),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym__newline] = ACTIONS(54),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(54),
    [sym_string] = ACTIONS(54),
    [sym_backtick_op] = ACTIONS(54),
    [sym_type_command] = ACTIONS(54),
    [anon_sym_COMMA] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(54),
    [sym_refined_open] = ACTIONS(57),
    [sym_command_head] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(54),
    [sym_alias_ref] = ACTIONS(54),
    [sym_person_ref] = ACTIONS(54),
    [sym_magnetic_placeholder] = ACTIONS(54),
    [sym_placeholder] = ACTIONS(63),
    [sym_assign_op] = ACTIONS(54),
    [sym_is_op] = ACTIONS(63),
    [sym_header] = ACTIONS(63),
    [sym_number] = ACTIONS(54),
    [sym_operator] = ACTIONS(63),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_LPAREN2] = ACTIONS(54),
    [anon_sym_LBRACE2] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_SEMI] = ACTIONS(54),
    [anon_sym_DOT] = ACTIONS(63),
    [anon_sym_QMARK] = ACTIONS(54),
    [anon_sym_PIPE] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(63),
    [anon_sym_BSLASH] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym__newline] = ACTIONS(66),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(66),
    [sym_string] = ACTIONS(66),
    [sym_backtick_op] = ACTIONS(66),
    [sym_type_command] = ACTIONS(66),
    [anon_sym_COMMA] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym_refined_open] = ACTIONS(66),
    [sym_command_head] = ACTIONS(66),
    [sym_command_close] = ACTIONS(66),
    [sym_command_label_marker] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(66),
    [sym_alias_ref] = ACTIONS(66),
    [sym_person_ref] = ACTIONS(66),
    [sym_magnetic_placeholder] = ACTIONS(66),
    [sym_placeholder] = ACTIONS(68),
    [sym_assign_op] = ACTIONS(66),
    [sym_is_op] = ACTIONS(68),
    [sym_header] = ACTIONS(68),
    [sym_number] = ACTIONS(66),
    [sym_operator] = ACTIONS(68),
    [sym_identifier] = ACTIONS(68),
    [anon_sym_LPAREN2] = ACTIONS(68),
    [anon_sym_LBRACE2] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(68),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym__newline] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(70),
    [sym_string] = ACTIONS(70),
    [sym_backtick_op] = ACTIONS(70),
    [sym_type_command] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [sym_refined_open] = ACTIONS(70),
    [sym_command_head] = ACTIONS(70),
    [sym_command_close] = ACTIONS(70),
    [sym_command_label_marker] = ACTIONS(72),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [sym_alias_ref] = ACTIONS(70),
    [sym_person_ref] = ACTIONS(70),
    [sym_magnetic_placeholder] = ACTIONS(70),
    [sym_placeholder] = ACTIONS(72),
    [sym_assign_op] = ACTIONS(70),
    [sym_is_op] = ACTIONS(72),
    [sym_header] = ACTIONS(72),
    [sym_number] = ACTIONS(70),
    [sym_operator] = ACTIONS(72),
    [sym_identifier] = ACTIONS(72),
    [anon_sym_LPAREN2] = ACTIONS(72),
    [anon_sym_LBRACE2] = ACTIONS(72),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(72),
    [anon_sym_QMARK] = ACTIONS(72),
    [anon_sym_PIPE] = ACTIONS(72),
    [anon_sym_SLASH] = ACTIONS(72),
    [anon_sym_BSLASH] = ACTIONS(72),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym__newline] = ACTIONS(74),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(74),
    [sym_string] = ACTIONS(74),
    [sym_backtick_op] = ACTIONS(74),
    [sym_type_command] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(74),
    [anon_sym_RPAREN] = ACTIONS(74),
    [sym_refined_open] = ACTIONS(74),
    [sym_command_head] = ACTIONS(74),
    [sym_command_close] = ACTIONS(74),
    [sym_command_label_marker] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(74),
    [anon_sym_RBRACE] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(74),
    [sym_alias_ref] = ACTIONS(74),
    [sym_person_ref] = ACTIONS(74),
    [sym_magnetic_placeholder] = ACTIONS(74),
    [sym_placeholder] = ACTIONS(76),
    [sym_assign_op] = ACTIONS(74),
    [sym_is_op] = ACTIONS(76),
    [sym_header] = ACTIONS(76),
    [sym_number] = ACTIONS(74),
    [sym_operator] = ACTIONS(76),
    [sym_identifier] = ACTIONS(76),
    [anon_sym_LPAREN2] = ACTIONS(76),
    [anon_sym_LBRACE2] = ACTIONS(76),
    [anon_sym_LBRACK] = ACTIONS(74),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(74),
    [anon_sym_DOT] = ACTIONS(76),
    [anon_sym_QMARK] = ACTIONS(76),
    [anon_sym_PIPE] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_BSLASH] = ACTIONS(76),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym__newline] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(78),
    [sym_string] = ACTIONS(78),
    [sym_backtick_op] = ACTIONS(78),
    [sym_type_command] = ACTIONS(78),
    [anon_sym_COMMA] = ACTIONS(78),
    [anon_sym_RPAREN] = ACTIONS(78),
    [sym_refined_open] = ACTIONS(78),
    [sym_command_head] = ACTIONS(78),
    [sym_command_close] = ACTIONS(78),
    [sym_command_label_marker] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(78),
    [anon_sym_RBRACE] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(78),
    [sym_alias_ref] = ACTIONS(78),
    [sym_person_ref] = ACTIONS(78),
    [sym_magnetic_placeholder] = ACTIONS(78),
    [sym_placeholder] = ACTIONS(80),
    [sym_assign_op] = ACTIONS(78),
    [sym_is_op] = ACTIONS(80),
    [sym_header] = ACTIONS(80),
    [sym_number] = ACTIONS(78),
    [sym_operator] = ACTIONS(80),
    [sym_identifier] = ACTIONS(80),
    [anon_sym_LPAREN2] = ACTIONS(80),
    [anon_sym_LBRACE2] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(78),
    [anon_sym_RBRACK] = ACTIONS(78),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(78),
    [anon_sym_DOT] = ACTIONS(80),
    [anon_sym_QMARK] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_BSLASH] = ACTIONS(80),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym__newline] = ACTIONS(82),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(82),
    [sym_string] = ACTIONS(82),
    [sym_backtick_op] = ACTIONS(82),
    [sym_type_command] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [sym_refined_open] = ACTIONS(82),
    [sym_command_head] = ACTIONS(82),
    [sym_command_close] = ACTIONS(82),
    [sym_command_label_marker] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(82),
    [sym_alias_ref] = ACTIONS(82),
    [sym_person_ref] = ACTIONS(82),
    [sym_magnetic_placeholder] = ACTIONS(82),
    [sym_placeholder] = ACTIONS(84),
    [sym_assign_op] = ACTIONS(82),
    [sym_is_op] = ACTIONS(84),
    [sym_header] = ACTIONS(84),
    [sym_number] = ACTIONS(82),
    [sym_operator] = ACTIONS(84),
    [sym_identifier] = ACTIONS(84),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [anon_sym_LBRACE2] = ACTIONS(84),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(84),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym__newline] = ACTIONS(86),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(86),
    [sym_string] = ACTIONS(86),
    [sym_backtick_op] = ACTIONS(86),
    [sym_type_command] = ACTIONS(86),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RPAREN] = ACTIONS(86),
    [sym_refined_open] = ACTIONS(86),
    [sym_command_head] = ACTIONS(86),
    [sym_command_close] = ACTIONS(86),
    [sym_command_label_marker] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(86),
    [sym_alias_ref] = ACTIONS(86),
    [sym_person_ref] = ACTIONS(86),
    [sym_magnetic_placeholder] = ACTIONS(86),
    [sym_placeholder] = ACTIONS(88),
    [sym_assign_op] = ACTIONS(86),
    [sym_is_op] = ACTIONS(88),
    [sym_header] = ACTIONS(88),
    [sym_number] = ACTIONS(86),
    [sym_operator] = ACTIONS(88),
    [sym_identifier] = ACTIONS(88),
    [anon_sym_LPAREN2] = ACTIONS(88),
    [anon_sym_LBRACE2] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_RBRACK] = ACTIONS(86),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_SEMI] = ACTIONS(86),
    [anon_sym_DOT] = ACTIONS(88),
    [anon_sym_QMARK] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_BSLASH] = ACTIONS(88),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [sym__newline] = ACTIONS(90),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(90),
    [sym_string] = ACTIONS(90),
    [sym_backtick_op] = ACTIONS(90),
    [sym_type_command] = ACTIONS(90),
    [anon_sym_COMMA] = ACTIONS(90),
    [anon_sym_RPAREN] = ACTIONS(90),
    [sym_refined_open] = ACTIONS(90),
    [sym_command_head] = ACTIONS(90),
    [sym_command_close] = ACTIONS(90),
    [sym_command_label_marker] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(90),
    [anon_sym_RBRACE] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(90),
    [sym_alias_ref] = ACTIONS(90),
    [sym_person_ref] = ACTIONS(90),
    [sym_magnetic_placeholder] = ACTIONS(90),
    [sym_placeholder] = ACTIONS(92),
    [sym_assign_op] = ACTIONS(90),
    [sym_is_op] = ACTIONS(92),
    [sym_header] = ACTIONS(92),
    [sym_number] = ACTIONS(90),
    [sym_operator] = ACTIONS(92),
    [sym_identifier] = ACTIONS(92),
    [anon_sym_LPAREN2] = ACTIONS(92),
    [anon_sym_LBRACE2] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(90),
    [anon_sym_RBRACK] = ACTIONS(90),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_SEMI] = ACTIONS(90),
    [anon_sym_DOT] = ACTIONS(92),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_PIPE] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_BSLASH] = ACTIONS(92),
  },
  [14] = {
    [sym__token] = STATE(15),
    [sym_command] = STATE(15),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(15),
    [aux_sym_command_brace_args_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(94),
    [sym_string] = ACTIONS(94),
    [sym_backtick_op] = ACTIONS(94),
    [sym_type_command] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(94),
    [sym_refined_open] = ACTIONS(9),
    [sym_command_head] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(96),
    [sym_alias_ref] = ACTIONS(94),
    [sym_person_ref] = ACTIONS(94),
    [sym_magnetic_placeholder] = ACTIONS(94),
    [sym_placeholder] = ACTIONS(98),
    [sym_assign_op] = ACTIONS(94),
    [sym_is_op] = ACTIONS(98),
    [sym_header] = ACTIONS(98),
    [sym_number] = ACTIONS(94),
    [sym_operator] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [anon_sym_LPAREN2] = ACTIONS(94),
    [anon_sym_LBRACE2] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
  },
  [15] = {
    [sym__token] = STATE(15),
    [sym_command] = STATE(15),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(15),
    [aux_sym_command_brace_args_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(100),
    [sym_string] = ACTIONS(100),
    [sym_backtick_op] = ACTIONS(100),
    [sym_type_command] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [sym_refined_open] = ACTIONS(103),
    [sym_command_head] = ACTIONS(106),
    [anon_sym_RBRACE] = ACTIONS(100),
    [sym_alias_ref] = ACTIONS(100),
    [sym_person_ref] = ACTIONS(100),
    [sym_magnetic_placeholder] = ACTIONS(100),
    [sym_placeholder] = ACTIONS(109),
    [sym_assign_op] = ACTIONS(100),
    [sym_is_op] = ACTIONS(109),
    [sym_header] = ACTIONS(109),
    [sym_number] = ACTIONS(100),
    [sym_operator] = ACTIONS(109),
    [sym_identifier] = ACTIONS(109),
    [anon_sym_LPAREN2] = ACTIONS(100),
    [anon_sym_LBRACE2] = ACTIONS(100),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(109),
  },
  [16] = {
    [sym__token] = STATE(18),
    [sym_command] = STATE(18),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(18),
    [aux_sym_command_brace_args_repeat1] = STATE(18),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(112),
    [sym_string] = ACTIONS(112),
    [sym_backtick_op] = ACTIONS(112),
    [sym_type_command] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(114),
    [sym_refined_open] = ACTIONS(9),
    [sym_command_head] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(112),
    [sym_alias_ref] = ACTIONS(112),
    [sym_person_ref] = ACTIONS(112),
    [sym_magnetic_placeholder] = ACTIONS(112),
    [sym_placeholder] = ACTIONS(116),
    [sym_assign_op] = ACTIONS(112),
    [sym_is_op] = ACTIONS(116),
    [sym_header] = ACTIONS(116),
    [sym_number] = ACTIONS(112),
    [sym_operator] = ACTIONS(116),
    [sym_identifier] = ACTIONS(116),
    [anon_sym_LPAREN2] = ACTIONS(112),
    [anon_sym_LBRACE2] = ACTIONS(112),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_SEMI] = ACTIONS(112),
    [anon_sym_DOT] = ACTIONS(116),
    [anon_sym_QMARK] = ACTIONS(112),
    [anon_sym_PIPE] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_BSLASH] = ACTIONS(116),
  },
  [17] = {
    [sym__token] = STATE(14),
    [sym_command] = STATE(14),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(14),
    [aux_sym_command_brace_args_repeat1] = STATE(14),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(118),
    [sym_string] = ACTIONS(118),
    [sym_backtick_op] = ACTIONS(118),
    [sym_type_command] = ACTIONS(118),
    [anon_sym_COMMA] = ACTIONS(118),
    [anon_sym_RPAREN] = ACTIONS(118),
    [sym_refined_open] = ACTIONS(9),
    [sym_command_head] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(120),
    [sym_alias_ref] = ACTIONS(118),
    [sym_person_ref] = ACTIONS(118),
    [sym_magnetic_placeholder] = ACTIONS(118),
    [sym_placeholder] = ACTIONS(122),
    [sym_assign_op] = ACTIONS(118),
    [sym_is_op] = ACTIONS(122),
    [sym_header] = ACTIONS(122),
    [sym_number] = ACTIONS(118),
    [sym_operator] = ACTIONS(122),
    [sym_identifier] = ACTIONS(122),
    [anon_sym_LPAREN2] = ACTIONS(118),
    [anon_sym_LBRACE2] = ACTIONS(118),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(118),
    [anon_sym_COLON] = ACTIONS(122),
    [anon_sym_SEMI] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(122),
    [anon_sym_QMARK] = ACTIONS(118),
    [anon_sym_PIPE] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_BSLASH] = ACTIONS(122),
  },
  [18] = {
    [sym__token] = STATE(15),
    [sym_command] = STATE(15),
    [sym_refined_command_head] = STATE(2),
    [sym__punct] = STATE(15),
    [aux_sym_command_brace_args_repeat1] = STATE(15),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(94),
    [sym_string] = ACTIONS(94),
    [sym_backtick_op] = ACTIONS(94),
    [sym_type_command] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(124),
    [sym_refined_open] = ACTIONS(9),
    [sym_command_head] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(94),
    [sym_alias_ref] = ACTIONS(94),
    [sym_person_ref] = ACTIONS(94),
    [sym_magnetic_placeholder] = ACTIONS(94),
    [sym_placeholder] = ACTIONS(98),
    [sym_assign_op] = ACTIONS(94),
    [sym_is_op] = ACTIONS(98),
    [sym_header] = ACTIONS(98),
    [sym_number] = ACTIONS(94),
    [sym_operator] = ACTIONS(98),
    [sym_identifier] = ACTIONS(98),
    [anon_sym_LPAREN2] = ACTIONS(94),
    [anon_sym_LBRACE2] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(94),
    [anon_sym_RBRACK] = ACTIONS(94),
    [anon_sym_COLON] = ACTIONS(98),
    [anon_sym_SEMI] = ACTIONS(94),
    [anon_sym_DOT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(94),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_BSLASH] = ACTIONS(98),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym__newline] = ACTIONS(126),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(126),
    [sym_string] = ACTIONS(126),
    [sym_backtick_op] = ACTIONS(126),
    [sym_type_command] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [sym_refined_open] = ACTIONS(126),
    [sym_command_head] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [sym_alias_ref] = ACTIONS(126),
    [sym_person_ref] = ACTIONS(126),
    [sym_magnetic_placeholder] = ACTIONS(126),
    [sym_placeholder] = ACTIONS(128),
    [sym_assign_op] = ACTIONS(126),
    [sym_is_op] = ACTIONS(128),
    [sym_header] = ACTIONS(128),
    [sym_number] = ACTIONS(126),
    [sym_operator] = ACTIONS(128),
    [sym_identifier] = ACTIONS(128),
    [anon_sym_LPAREN2] = ACTIONS(126),
    [anon_sym_LBRACE2] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [anon_sym_COLON] = ACTIONS(128),
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_DOT] = ACTIONS(128),
    [anon_sym_QMARK] = ACTIONS(126),
    [anon_sym_PIPE] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_BSLASH] = ACTIONS(128),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym__newline] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
    [sym_bullet] = ACTIONS(40),
    [sym_string] = ACTIONS(40),
    [sym_backtick_op] = ACTIONS(40),
    [sym_type_command] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [sym_refined_open] = ACTIONS(40),
    [sym_command_head] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [sym_alias_ref] = ACTIONS(40),
    [sym_person_ref] = ACTIONS(40),
    [sym_magnetic_placeholder] = ACTIONS(40),
    [sym_placeholder] = ACTIONS(44),
    [sym_assign_op] = ACTIONS(40),
    [sym_is_op] = ACTIONS(44),
    [sym_header] = ACTIONS(44),
    [sym_number] = ACTIONS(40),
    [sym_operator] = ACTIONS(44),
    [sym_identifier] = ACTIONS(44),
    [anon_sym_LPAREN2] = ACTIONS(40),
    [anon_sym_LBRACE2] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(40),
    [anon_sym_COLON] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_QMARK] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(44),
    [anon_sym_BSLASH] = ACTIONS(44),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_refined_command_head_repeat1,
  [13] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_refined_command_head_repeat1,
  [26] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_refined_command_head_repeat1,
  [39] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [47] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_command_label_name,
  [54] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_command_name,
  [61] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_refined_separator,
  [68] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_command_name,
  [75] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_refined_separator,
  [82] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_command_name,
  [89] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_command_name,
  [96] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 13,
  [SMALL_STATE(23)] = 26,
  [SMALL_STATE(24)] = 39,
  [SMALL_STATE(25)] = 47,
  [SMALL_STATE(26)] = 54,
  [SMALL_STATE(27)] = 61,
  [SMALL_STATE(28)] = 68,
  [SMALL_STATE(29)] = 75,
  [SMALL_STATE(30)] = 82,
  [SMALL_STATE(31)] = 89,
  [SMALL_STATE(32)] = 96,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_label, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_label, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refined_command_head, 6, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refined_command_head, 6, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refined_command_head, 5, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refined_command_head, 5, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_paren_args, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_paren_args, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_brace_args, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_brace_args, 3, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_brace_args, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_brace_args, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_paren_args, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_paren_args, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_brace_args_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_refined_command_head_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_refined_command_head_repeat1, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [155] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
