/*
 * SPDX-FileCopyrightText: 2024 Ali Sajid Imami
 *
 * SPDX-License-Identifier: MIT
 */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  anon_sym_COLON = 2,
  sym_field_name = 3,
  aux_sym_simple_value_token1 = 4,
  aux_sym_folded_value_token1 = 5,
  sym_comment = 6,
  sym_stanza_separator = 7,
  sym_source_file = 8,
  sym_stanza = 9,
  sym_field = 10,
  sym_field_value = 11,
  sym_simple_value = 12,
  sym_folded_value = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_stanza_repeat1 = 15,
  aux_sym_folded_value_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_COLON] = ":",
  [sym_field_name] = "field_name",
  [aux_sym_simple_value_token1] = "simple_value_token1",
  [aux_sym_folded_value_token1] = "folded_value_token1",
  [sym_comment] = "comment",
  [sym_stanza_separator] = "stanza_separator",
  [sym_source_file] = "source_file",
  [sym_stanza] = "stanza",
  [sym_field] = "field",
  [sym_field_value] = "field_value",
  [sym_simple_value] = "simple_value",
  [sym_folded_value] = "folded_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_stanza_repeat1] = "stanza_repeat1",
  [aux_sym_folded_value_repeat1] = "folded_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_field_name] = sym_field_name,
  [aux_sym_simple_value_token1] = aux_sym_simple_value_token1,
  [aux_sym_folded_value_token1] = aux_sym_folded_value_token1,
  [sym_comment] = sym_comment,
  [sym_stanza_separator] = sym_stanza_separator,
  [sym_source_file] = sym_source_file,
  [sym_stanza] = sym_stanza,
  [sym_field] = sym_field,
  [sym_field_value] = sym_field_value,
  [sym_simple_value] = sym_simple_value,
  [sym_folded_value] = sym_folded_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_stanza_repeat1] = aux_sym_stanza_repeat1,
  [aux_sym_folded_value_repeat1] = aux_sym_folded_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_simple_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_folded_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_stanza_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_stanza] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_value] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_value] = {
    .visible = true,
    .named = true,
  },
  [sym_folded_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stanza_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_folded_value_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0);
      if (('!' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\r') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '\r') ADVANCE(7);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_field_name);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_field_name);
      if (('!' <= lookahead && lookahead <= '9') ||
          (';' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_simple_value_token1);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_simple_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_folded_value_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_stanza_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_field_name] = ACTIONS(1),
    [aux_sym_folded_value_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_stanza] = STATE(10),
    [sym_field] = STATE(3),
    [aux_sym_stanza_repeat1] = STATE(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [sym_field_name] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_stanza,
    STATE(3), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [17] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_stanza_separator,
    STATE(5), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [32] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_source_file_token1,
    ACTIONS(15), 1,
      aux_sym_simple_value_token1,
    STATE(24), 1,
      sym_field_value,
    STATE(26), 2,
      sym_simple_value,
      sym_folded_value,
  [49] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_field_name,
    ACTIONS(17), 2,
      ts_builtin_sym_end,
      sym_stanza_separator,
    STATE(5), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [64] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_stanza,
    STATE(3), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [81] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_stanza,
    STATE(3), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [98] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    STATE(12), 1,
      sym_stanza,
    STATE(3), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_field_name,
    STATE(20), 1,
      sym_stanza,
    STATE(3), 2,
      sym_field,
      aux_sym_stanza_repeat1,
  [126] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(30), 1,
      sym_stanza_separator,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
  [139] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_stanza_separator,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [152] = 4,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_stanza_separator,
    STATE(16), 1,
      aux_sym_source_file_repeat1,
  [165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_field_name,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      sym_stanza_separator,
  [176] = 4,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(38), 1,
      aux_sym_source_file_token1,
    ACTIONS(40), 1,
      aux_sym_folded_value_token1,
    STATE(18), 1,
      aux_sym_folded_value_repeat1,
  [189] = 4,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_stanza_separator,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [202] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_stanza_separator,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_field_name,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_stanza_separator,
  [226] = 4,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(40), 1,
      aux_sym_folded_value_token1,
    ACTIONS(53), 1,
      aux_sym_source_file_token1,
    STATE(19), 1,
      aux_sym_folded_value_repeat1,
  [239] = 4,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_source_file_token1,
    ACTIONS(57), 1,
      aux_sym_folded_value_token1,
    STATE(19), 1,
      aux_sym_folded_value_repeat1,
  [252] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      sym_stanza_separator,
  [260] = 3,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_source_file_token1,
    ACTIONS(60), 1,
      aux_sym_folded_value_token1,
  [270] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_COLON,
  [277] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [284] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
  [291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      aux_sym_simple_value_token1,
  [298] = 2,
    ACTIONS(28), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 32,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 98,
  [SMALL_STATE(9)] = 112,
  [SMALL_STATE(10)] = 126,
  [SMALL_STATE(11)] = 139,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 202,
  [SMALL_STATE(17)] = 215,
  [SMALL_STATE(18)] = 226,
  [SMALL_STATE(19)] = 239,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 260,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 277,
  [SMALL_STATE(24)] = 284,
  [SMALL_STATE(25)] = 291,
  [SMALL_STATE(26)] = 298,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stanza, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stanza_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stanza_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_value, 1, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_folded_value, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_folded_value_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_folded_value_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_folded_value_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_value, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_dcf(void) {
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
