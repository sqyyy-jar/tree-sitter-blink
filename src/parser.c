#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_module = 1,
  anon_sym_end = 2,
  anon_sym_fun = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_in = 6,
  anon_sym_do = 7,
  anon_sym_SEMI = 8,
  sym_number = 9,
  sym_identifier = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_module_definition = 13,
  sym_function_definition = 14,
  sym_parameter_list = 15,
  sym__function_body = 16,
  sym_block = 17,
  sym_statement = 18,
  sym_expression = 19,
  aux_sym_source_file_repeat1 = 20,
  aux_sym_block_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_end] = "end",
  [anon_sym_fun] = "fun",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_in] = "in",
  [anon_sym_do] = "do",
  [anon_sym_SEMI] = ";",
  [sym_number] = "number",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_module_definition] = "module_definition",
  [sym_function_definition] = "function_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__function_body] = "_function_body",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_number] = sym_number,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_module_definition] = sym_module_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__function_body] = sym__function_body,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__function_body] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(2);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(26),
    [sym__definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [sym_function_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_module,
    ACTIONS(14), 1,
      anon_sym_fun,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_end,
    STATE(2), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [17] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [33] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(19), 1,
      anon_sym_end,
    STATE(5), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [49] = 4,
    ACTIONS(5), 1,
      anon_sym_module,
    ACTIONS(7), 1,
      anon_sym_fun,
    ACTIONS(21), 1,
      anon_sym_end,
    STATE(2), 4,
      sym__definition,
      sym_module_definition,
      sym_function_definition,
      aux_sym_source_file_repeat1,
  [65] = 5,
    ACTIONS(23), 1,
      anon_sym_end,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(28), 1,
      sym_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [82] = 5,
    ACTIONS(31), 1,
      anon_sym_end,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(23), 1,
      sym_expression,
    STATE(6), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [99] = 5,
    ACTIONS(33), 1,
      sym_number,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_end,
    STATE(21), 1,
      sym_expression,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [116] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
      anon_sym_SEMI,
  [124] = 1,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [131] = 1,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [138] = 1,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [145] = 1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [152] = 3,
    ACTIONS(49), 1,
      anon_sym_in,
    ACTIONS(51), 1,
      anon_sym_do,
    STATE(16), 2,
      sym__function_body,
      sym_block,
  [163] = 1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [170] = 1,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [177] = 1,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_end,
      anon_sym_fun,
  [184] = 2,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(59), 2,
      anon_sym_end,
      sym_identifier,
  [192] = 2,
    STATE(17), 1,
      sym_expression,
    ACTIONS(33), 2,
      sym_number,
      sym_identifier,
  [200] = 1,
    ACTIONS(63), 2,
      anon_sym_in,
      anon_sym_do,
  [205] = 2,
    ACTIONS(65), 1,
      anon_sym_end,
    ACTIONS(67), 1,
      anon_sym_SEMI,
  [212] = 2,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_parameter_list,
  [219] = 2,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(71), 1,
      anon_sym_end,
  [226] = 1,
    ACTIONS(73), 1,
      sym_identifier,
  [230] = 1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
  [234] = 1,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
  [238] = 1,
    ACTIONS(79), 1,
      sym_identifier,
  [242] = 1,
    ACTIONS(67), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 33,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 138,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 177,
  [SMALL_STATE(18)] = 184,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 200,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 212,
  [SMALL_STATE(23)] = 219,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 230,
  [SMALL_STATE(26)] = 234,
  [SMALL_STATE(27)] = 238,
  [SMALL_STATE(28)] = 242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__function_body, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_blink(void) {
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
