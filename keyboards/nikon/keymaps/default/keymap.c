#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /* ┌───┬───┬───┬───┬───┬───┐                    ┌───┬───┬───┬───┬───┬───┐
      * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 ├───┐            ┌───┤ 6 │ 7 │ 8 │ 9 │ 0 │Del│
      * ├───┼───┼───┼───┼───┼───┤ - │            │ [ ├───┼───┼───┼───┼───┼───┤
      * │Tab│ Q │ W │ E │ R │ T │   │            │   │ Y │ U │ I │ O │ P │   │
      * ├───┼───┼───┼───┼───┼───┼───┤            ├───┼───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │ = │            │ ] │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤   │            │   ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B ├───┘            └───┤ N │ M │ , │ . │ / │Sft│
      * ├───┼───┼───┼───┼───┴───┘                    └───┴───┼───┼───┼───┼───┤
      * │Fn │Ctl│Alt│Gui│        ┌─────┐      ┌─────┐        │Hme│PUp│PDn│End│
      * └───┴───┴───┴───┘        │Bsp  │      │  \  │        └───┴───┴───┴───┘
      *                     ┌───┬┴──┬──┴┐    ┌┴──┬──┴┬───┐
      *                     │Gui│Bsp│Del│    │Rtn│Spc│Fn │
      *                     │   │   │   │    │   │   │   │
      *                     └───┴───┴───┘    └───┴───┴───┘
      */
    [_BASE] = LAYOUT_nikon(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MINS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_EQL, 
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_RGUI,
        MO(_FN), KC_LCTL, KC_LALT, KC_LGUI, KC_LGUI, KC_BSPC, KC_DEL,

                 KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
        KC_LBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_INS,
        KC_RBRC, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_BSLS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_ENT,  KC_SPC,  MO(_FN), KC_HOME, KC_PGUP, KC_PGDN, KC_END
    ),
    [_FN] = LAYOUT_nikon(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,
        _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, 
        KC_LSFT, _______, _______, _______, _______, _______, _______, 
        _______, KC_LCTL, KC_LALT, KC_LGUI, _______, _______, _______,

                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, 
        _______, _______, _______, _______, _______, _______, KC_RSFT, 
        _______, _______, _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END
    )

};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 
  return true;
}
