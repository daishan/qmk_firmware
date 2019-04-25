#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
/*#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC, \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, \
    KC_LCTL, KC_LALT, KC_LGUI, MO(_FN1),KC_SPC,           MO(_FN1),KC_BSPC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  ),

  [_FN1] = LAYOUT(
    KC_GESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC, \
    RGB_TOG, RGB_MOD, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, _______, _______, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_TILD, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______
  )
};*/

#include "daishan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_GESC, ___1___, ___2___, ___3___, ___4___, ___5___, ___6___, ___7___, ___8___, ___9___, ___0___, KC_MINS, KC_EQL, KC_BSPC,KC_BSPC,
        KC_TAB,   ___Q___, ___W___, ___E___, ___R___, ___T___, ___Y___, ___U___, ___I___, ___O___, ___P___, KC_LBRC, KC_RBRC,  KC_BSLS,
        MO(FN1),   ___A___, ___S___, ___D___, ___F___, ___G___, ___H___, ___J___, ___K___, ___L___, KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,    ___Z___, ___X___, ___C___, ___V___, ___B___, ___N___, ___M___, KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,   MO(FN1),
        KC_LCTL,    KC_LGUI,    KC_LALT,     MO(FN1), KC_SPC,  KC_SPC,  KC_BSPC,      KC_RALT,    MO(FN1), KC_RGUI, MO(FN2),   KC_RCTL),

    [FN1] = LAYOUT(
        KC_GRV,  __F1___, __F2___, __F3___, __F4___, __F5___, __F6___, __F7___, __F8___, __F9___, __F10__, __F11__, __F12__,   KC_DEL,KC_DEL,
        _______,  _______, KC_UP,   _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,  RESET,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______,         _______, _______,
        _______,    _______,    _______,     _______, _______, _______, _______,      _______,    _______, _______, _______,   _______),

    [FN2] = LAYOUT(
        _______, SHRUG,   POOP,    FLIPTAB, FLIPTA2, THUMBUP, M(6),    M(7),    M(8),    M(9),    M(10),    M(11),    M(12),   _______,_______,
        _______,  KC_MUTE, KC_VOLU, RGBSWRL, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,  RESET,
        _______,   KC_WBAK, KC_VOLD, KC_WFWD, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______,         _______, _______,
        _______,    TG(CAP),    _______,     _______, TG(GAM), _______, _______,      _______,    _______, _______, _______,   RGB_TOG),

    [CAP] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,_______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______,
        _______,    _______,    _______,     _______, _______, _______, _______,      _______,    _______, _______, _______,   _______),

    [GAM] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,_______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_PCMM,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______, _______,
        _______,    _______,    _______,     _______, _______, _______, _______,      _______,    _______, _______, _______,   _______),
}; 
