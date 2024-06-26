#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 
     * ├───┼───┼───┼───┼───┼───┼───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ Q │ W │ E │ R │ T │   │ Y │ U │ I │ O │ P │ ´ │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ A │ S │ D │ F │ G │   │ H │ J │ K │ L │ Ñ │Ent│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │   │ N │ M │ , │ . │ - │Arr│
     * ├───┼───┼───┼───┴───┴───┼───┼───┴───┴───┼───┼───┼───┤
     * │Ctl│Alt│ Fn│   Space   │   │ Backspace │Izq│Aba│Der│
     * └───┴───┴───┴───────────┴───┴───────────┴───┴───┴───┘
     */
    [0] = LAYOUT(
            KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,
        KC_ESC,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,              KC_Y,        KC_U,       KC_I,       KC_O,       KC_P,       KC_LBRC,
        KC_TAB,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,              KC_H,        KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_ENT,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,              KC_N,        KC_M,       KC_COMMA,   KC_DOT,     KC_SLSH,    KC_UP,
        KC_LCTL,    KC_LALT,    KC_LGUI,                KC_SPC,                                     KC_BSPC,                KC_LEFT,    KC_DOWN,    KC_RIGHT
    )
};
