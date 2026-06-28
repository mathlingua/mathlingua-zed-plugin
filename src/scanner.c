#include "tree_sitter/parser.h"

// External scanner for Mathlingua line comments.
//
// A line is a comment only when, ignoring leading spaces/tabs, the first
// characters on the line are "--". A "--" anywhere else on the line (e.g.
// `[x_ -- y_]`) is ordinary code, so the comment token must be anchored to the
// start of a line. Tree-sitter token regexes cannot express that anchor, hence
// this scanner: it emits `comment` only when `get_column` reports column 0 at
// entry (i.e. nothing but the line start precedes it), after which it consumes
// any indentation and requires "--".

enum TokenType {
  COMMENT,
};

void *tree_sitter_mathlingua_external_scanner_create(void) { return NULL; }
void tree_sitter_mathlingua_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_mathlingua_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_mathlingua_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_mathlingua_external_scanner_scan(void *payload, TSLexer *lexer,
                                                  const bool *valid_symbols) {
  if (!valid_symbols[COMMENT]) {
    return false;
  }

  // Only the very start of a line can begin a comment. Any leading whitespace
  // has not been consumed yet, so column 0 means we are at the line start.
  if (lexer->get_column(lexer) != 0) {
    return false;
  }

  // Skip leading indentation (treated as whitespace, not part of the comment).
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }

  // The line must begin (after indentation) with "--".
  if (lexer->lookahead != '-') {
    return false;
  }
  lexer->advance(lexer, false);
  if (lexer->lookahead != '-') {
    return false;
  }
  lexer->advance(lexer, false);

  // Consume the rest of the line; the newline itself stays a separate token.
  while (lexer->lookahead != '\n' && lexer->lookahead != '\r' && lexer->lookahead != 0) {
    lexer->advance(lexer, false);
  }

  lexer->mark_end(lexer);
  lexer->result_symbol = COMMENT;
  return true;
}
