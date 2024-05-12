// Copyright 2022 QMK (James Young @noroadsleft)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* ┌───┬───┬───┬───┬───┬───┬───┬───┐
     * │ESC│ Q │ W │ E │ R │ T │ Y │ U │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │TAB│ A │ S │ D │ F │ G │ H │ J │ 
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │ N │ M │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctl│   │Alt│Fn │Spc│   │BS │   │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼
	 * │ I │ O │ P │BS │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │ K │ L │ Ñ │Ent│ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │,< │.> │/? │¨  │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┼───┼───┼───┼───┤
     * │Fn2│Win│   │¿  │ 0 │ . │Ent│ + │ 
     * └───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(\
		KC_ESC, 	KC_Q, 		KC_W, 		KC_E, 		KC_R, 		KC_T, 		KC_Y, 		KC_U,\
		KC_TAB, 	KC_A, 		KC_S, 		KC_D, 		KC_F, 		KC_G, 		KC_H, 		KC_J,\
		KC_LSFT, 	KC_Z, 		KC_X, 		KC_C, 		KC_V, 		KC_B, 		KC_N, 		KC_M,\
		KC_LCTL, 	KC_EQL, 	KC_LALT,	KC_LGUI, 	KC_SPC, 	KC_BSPC, 	KC_LGUI, 	KC_LGUI,\
		KC_I, 		KC_O, 		KC_P, 		KC_LBRC, 	KC_P7, 		KC_P8, 		KC_P9,		KC_PSLS,\
		KC_K, 		KC_L, 		KC_SCLN,	KC_ENT, 	KC_P4, 		KC_P5, 		KC_P6, 		KC_PAST,\
		KC_COMMA, 	KC_DOT, 	KC_SLSH,	KC_QUOTE, 	KC_P1, 		KC_P2, 		KC_P3, 		KC_PMNS,\
		KC_P0, 		KC_PDOT, 	KC_PENT, 	KC_PPLS\
		)
  
};
