/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2023 André Büsgen <andre.buesgen@posteo.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

/*suspender el rgb*/
/* static uint16_t key_timer;
static void refresh_rgb(void);
static void check_rgb_timeout(void);
bool is_rgb_timeout = false;

void refresh_rgb() {
	key_timer = timer_read();
	if (is_rgb_timeout) {
		is_rgb_timeout = false;
		rgblight_wakeup();
		}
}

void check_rgb_timeout() {
	if (!is_rgb_timeout && timer_elapsed(key_timer) > RGBLIGHT_TIMEOUT) {
		rgblight_suspend();
		is_rgb_timeout = true;
	}
}

void housekeeping_task_user(void) {
	#ifdef RGBLIGHT_TIMEOUT
	check_rgb_timeout();
	#endif
	}
	
	
void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
	#ifdef RGBLIGHT_TIMEOUT
	if (record->event.pressed) refresh_rgb();
	#endif
}


 */
enum layers{
    _BASE,
    _RAISE,
    _LOWER
};

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  
    [_BASE] = LAYOUT(
        QK_GESC, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                                   KC_LCTL, KC_LALT, LT(_LOWER,KC_SPC),          KC_BSPC, KC_RGUI, RAISE
    ),

    [_LOWER] = LAYOUT(
        KC_1, 	 KC_2, 	  KC_3,    KC_4, 	KC_5,	 KC_6,                	     KC_7, 	  KC_8,    KC_9,    KC_0,    KC_MINS,    KC_EQL,
        S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), S(KC_6),                	 S(KC_7), S(KC_8), S(KC_9), S(KC_0), S(KC_MINS), S(KC_EQL),
        KC_F1, 	 KC_F2,   KC_F3,   KC_F4, 	KC_F5,	 KC_F6,                	     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,     KC_F12,
                                   _______, _______, _______,                    KC_DEL,  KC_NUBS, _______
    ),
                                    
    [_RAISE] = LAYOUT(
        _______, QK_BOOT, KC_UP,   _______, _______, KC_LBRC,                    KC_RBRC, _______, KC_NUM, KC_INS,  KC_SCRL, KC_MUTE,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, KC_LPRN,                    KC_RPRN, KC_MPRV, KC_MPLY, KC_MNXT, _______, KC_VOLU,
        _______, _______, _______, _______, _______, _______,                    _______, _______, _______, _______, _______, KC_VOLD,
                                   _______, _______, RGB_MOD,                    RGB_TOG, _______, _______
    )

};
//clang-format on

