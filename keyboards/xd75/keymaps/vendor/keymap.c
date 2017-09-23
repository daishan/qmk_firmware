/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "xd75.h"


/* This is a replication of the preinstalled TMK XD75 keymap by Kai Ryu.
 *
 * This layout technically has three function layers, but they are the same
 * except for trickeries with Fn. This makes it possible to toggle the function
 * layer by presssing both Fn keys. The function layer can then be toggled off
 * again by pressing either Fn key.
 *
 * The controls for the RGB underglow lighting seem to work differently
 * in QMK, so that part of the function layer differs somewhat from the
 * original.
 */


// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _BASE 0

enum custom_keycodes {
    DUB0 = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Base Layer
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | CAPS   | A      | S      | D      | F      | G      | Home   | Del    | PgUp   | H      | J      | K      | L      | ;      | RETURN |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | End    | UP     | PgDn   | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | LGUI   | LALT   | FN     | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | FN     | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_BASE] = {
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRV,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC  },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT  },
  { KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_DEL,  KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT   },
  { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT  },
  { KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_SPC,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC,  KC_SPC,  MO(2),   KC_RALT, KC_RGUI, KC_RCTL, },
 },

/* Function Layer
 * .------------------------------------------------------------------------------------------------------------------------- ------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NumLck | /      | *      | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | MSel   | Calc   | MCo    | Mail   |        |        | 7      | 8      | 9      | -      |        |        | PrScr  | ScrLck | Pause  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | Prev   | Play   | Next   | Stop   |        |        | 4      | 5      | 6      | +      |        | RESET  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VolDn  | Mute   | VolUp  | App    |        |        | 1      | 2      | 3      | Enter  | SatInc |        | RGBMod | ValInc | RGBTog |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | BlDec  | BlTog  | BlInc  | Fn     |        |        | 0      | 00     | .      | Enter  | SatDec | Fn     | HueDec | ValDec | HueInc |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [1] = {
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NLCK, KC_PSLS, KC_PAST, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12   },
  { KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS  },
  { KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______, RESET,   _______, _______, _______  },
  { KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, RGB_SAI, _______, RGB_MOD, RGB_VAI, RGB_TOG  },
  { BL_DEC,  BL_TOGG, BL_INC,  _______, _______, _______, KC_P0,   DUB0,    KC_PDOT, KC_PENT, RGB_SAD, TG(3),   RGB_HUD, RGB_VAD, RGB_HUI  },
 },

 [2] = {
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NLCK, KC_PSLS, KC_PAST, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12   },
  { KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS  },
  { KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______, RESET,   _______, _______, _______  },
  { KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, RGB_SAI, _______, RGB_MOD, RGB_VAI, RGB_TOG  },
  { BL_DEC,  BL_TOGG, BL_INC,  TG(3),   _______, _______, KC_P0,   DUB0,    KC_PDOT, KC_PENT, RGB_SAD, _______, RGB_HUD, RGB_VAD, RGB_HUI  },
 },

 [3] = {
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NLCK, KC_PSLS, KC_PAST, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12   },
  { KC_MSEL, KC_CALC, KC_MYCM, KC_MAIL, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS  },
  { KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______, RESET,   _______, _______, _______  },
  { KC_VOLD, KC_MUTE, KC_VOLU, KC_APP,  _______, _______, KC_P1,   KC_P2,   KC_P3,   KC_PENT, RGB_SAI, _______, RGB_MOD, RGB_VAI, RGB_TOG  },
  { BL_DEC,  BL_TOGG, BL_INC,  TO(0),   _______, _______, KC_P0,   DUB0,    KC_PDOT, KC_PENT, RGB_SAD, TO(0),   RGB_HUD, RGB_VAD, RGB_HUI  },
 },
};

const uint16_t PROGMEM fn_actions[] = {

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case DUB0:
                SEND_STRING("00");
                return false; break;
        }
    }
    return true;
};

