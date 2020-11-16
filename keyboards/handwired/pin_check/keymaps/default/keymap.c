/* Copyright 2020 Brian <brian@htpkbs.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FUNCTION,
    _LOWER,
    _RAISE
};

// Defines the keycodes used by our macros in process_record_user
//enum custom_keycodes {
//    QMKBEST = SAFE_RANGE,
//    QMKURL
//};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_ortho_5x13(
        KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS,
        KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC,
        MT(MOD_LCTL, KC_TAB), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_VOLU,
        MO(_FUNCTION), MOD_LCTL, KC_LOPT, KC_LCMD, MO(_LOWER), KC_BSPC, KC_SPC, MO(_RAISE), KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_VOLD
    ),
    [_FUNCTION] = LAYOUT_ortho_5x13(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_F13,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        MT(MOD_LCTL, KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU,
        KC_NO, MOD_LCTL, KC_LOPT, KC_LCMD, KC_NO, KC_BSPC, KC_SPC, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_VOLD
    ),
    [_LOWER] = LAYOUT_ortho_5x13(
        KC_ESC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PAST, KC_P7, KC_P8, KC_P9, KC_PMNS,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSLS, KC_P4, KC_P5, KC_P6, KC_PPLS,
        MT(MOD_LCTL, KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PENT,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_P0, KC_NO, KC_PDOT, KC_VOLU,
        KC_NO, MOD_LCTL, KC_LOPT, KC_LCMD, KC_NO, KC_BSPC, KC_SPC, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_VOLD
    ),
    [_RAISE] = LAYOUT_ortho_5x13(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        MT(MOD_LCTL, KC_TAB), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO, KC_ENT,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU,
        KC_NO, MOD_LCTL, KC_LOPT, KC_LCMD, KC_NO, KC_BSPC, KC_SPC, KC_NO, KC_HOME, KC_END, KC_PGUP, KC_PGDN, KC_VOLD
    )
};

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}
*/
