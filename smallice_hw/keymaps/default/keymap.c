// Copyright 2022 Miguel (@NadieNiemand)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,   KC_LBRC, KC_RBRC, KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT, KC_RSFT, KC_UP,   KC_SLSH,
        KC_LCTRL,KC_ESC,  KC_LALT, KC_VOLU, KC_SPC,  KC_LWIN, KC_VOLD, KC_SPC,           MO(1),            KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_FN] = LAYOUT(
        RESET, 	 KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,   KC_LBRC, KC_RBRC, KC_BSPC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,KC_QUOT,          KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT, KC_RSFT, KC_UP,   KC_SLSH,
        KC_LCTRL,KC_ESC,  KC_LALT, KC_VOLU, KC_SPC,  KC_LWIN, KC_VOLD, KC_SPC,           MO(1),            KC_LEFT, KC_DOWN, KC_RIGHT
    )
};
