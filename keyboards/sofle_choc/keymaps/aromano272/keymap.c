/* Copyright 2023 Brian Low
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

enum layer_number {
    _QUERTY = 0,
    _FN,
    _MOD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  =+  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -_  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |  `~  |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \|  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | XXXX | MO(1)| LSFT | LCTL | /Space  /       \Enter \  | LGUI | LALT | MO(1)| XXXX |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

// [_QUERTY] = LAYOUT(
//     KC_EQUAL, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_MINUS,
//     KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC,
//     KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
//     KC_GRV,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,   KC_MPLY,KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_BACKSLASH,
//                       KC_NO,   MO(_FN), KC_LSFT, KC_LCTL, KC_SPC,    KC_ENT, KC_LGUI,  KC_LALT,  MO(_FN), KC_NO
// ),

/*
 * QWERTY ALT
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  =+  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -_  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * |  `~  |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  \|  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | XXXX | LSFT | LCTL | LGUI | / LALT  /       \Enter \  | Space| MO(1)| LSFT | XXXX |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QUERTY] = LAYOUT(
    KC_EQUAL, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,     KC_7,     KC_8,    KC_9,    KC_0,    KC_MINUS,
    KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_GRV,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,   KC_MPLY,KC_N,     KC_M,     KC_COMM, KC_DOT,  KC_SLSH, KC_BACKSLASH,
                      KC_NO,   KC_LGUI, KC_LCTL, KC_LSFT, KC_LALT,    KC_ENT,KC_SPC,   MO(_FN),  KC_NO, KC_NO
),

/*
 * FN
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | XXXX |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | XXXX | XXXX |  F12 |  {   |  [   |  (   |                    |   )  |   ]  |   }  | XXXX | XXXX |  DEL |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |-------.    ,-------| LEFT |  UP  | DOWN | RIGHT| XXXX | XXXX |
 * |------+------+------+------+------+------|  Mute |    | Pause |------+------+------+------+------+------|
 * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |-------|    |-------| XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | XXXX | MO(1)| LSFT | LCTL | /Space  /       \Enter \  | LGUI | LALT | MO(1)| XXXX |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_FN] = LAYOUT(
    KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,    KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_F11,
    KC_NO,   KC_NO,   KC_F12,  KC_LCBR, KC_LBRC, KC_LPRN,                       KC_RPRN,  KC_RBRC,  KC_RCBR, KC_NO,   KC_NO,   KC_DEL,
    KC_NO,   AS_TOGG, KC_NO,   KC_NO,   KC_NO,   KC_NO,                         KC_LEFT,  KC_DOWN,  KC_UP,   KC_RIGHT,KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MUTE,      KC_MPLY,KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
                      KC_NO,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, MO(_MOD), KC_TRNS, KC_NO
),

/*
 * MOD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |                    | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |                    | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |-------.    ,-------| XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
 * |------+------+------+------+------+------|  XXXX |    | XXXX  |------+------+------+------+------+------|
 * | XXXX | XXXX | XXXX | XXXX | XXXX | BOOT |-------|    |-------| XXXX | XXXX | XXXX | XXXX | XXXX | XXXX |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | XXXX | MO(1)| LSFT | LCTL | /Space  /       \Enter \  | LGUI | LALT | MO(1)| XXXX |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_MOD] = LAYOUT(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                          KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,      KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,      KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,    KC_NO,      KC_NO,KC_NO,  KC_NO,    KC_NO,   KC_NO,   KC_NO,   KC_NO,
                      KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,        KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO
)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
    { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT) },
};
#endif

#if defined(AUTO_SHIFT_ENABLE)
bool get_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
#ifndef NO_AUTO_SHIFT_ALPHA
        case AUTO_SHIFT_ALPHA: {
            switch (keycode) {
                case KC_H:
                case KC_J:
                case KC_K:
                case KC_L:
                    return false; // disable Auto-Shift
                default:
                    return true;
            }
        }
#endif
#ifndef NO_AUTO_SHIFT_NUMERIC
        case AUTO_SHIFT_NUMERIC:
#endif
#ifndef NO_AUTO_SHIFT_SPECIAL
#    ifndef NO_AUTO_SHIFT_TAB
        case KC_TAB:
#    endif
#    ifndef NO_AUTO_SHIFT_SYMBOLS
        case AUTO_SHIFT_SYMBOLS:
#    endif
#endif
#ifdef AUTO_SHIFT_ENTER
        case KC_ENT:
#endif
            return true;
    }
    return get_custom_auto_shifted_key(keycode, record);
}
#endif
