#include "dz60.h"
#include "daishan.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_60_ansi(
        KC_GESC, ___1___, ___2___, ___3___, ___4___, ___5___, ___6___, ___7___, ___8___, ___9___, ___0___, KC_MINS, KC_EQL,    KC_BSPC,
        KC_TAB,   ___Q___, ___W___, ___E___, ___R___, ___T___, ___Y___, ___U___, ___I___, ___O___, ___P___, KC_LBRC, KC_RBRC,  KC_BSLS,
        MO(FN1),   ___A___, ___S___, ___D___, ___F___, ___G___, ___H___, ___J___, ___K___, ___L___, KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,    ___Z___, ___X___, ___C___, ___V___, ___B___, ___N___, ___M___, KC_COMM, KC_DOT,  KC_SLSH,                  KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,                      KC_SPC,                       KC_RALT,    MO(FN1),    MO(FN2),   KC_RCTL),

    [FN1] = LAYOUT_60_ansi(
        KC_GRV,  __F1___, __F2___, __F3___, __F4___, __F5___, __F6___, __F7___, __F8___, __F9___, __F10__, __F11__, __F12__,   KC_DEL,
        _______,  DESKUP,  KC_UP,   DESKDWN, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,  RESET,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______,                  _______,
        _______,    _______,    _______,                     _______,                       _______,    _______,    _______,   _______),

    [FN2] = LAYOUT_60_ansi(
        _______, SHRUG,   POOP,    FLIPTAB, FLIPTA2, THUMBUP, M(6),    M(7),    M(8),    M(9),    M(10),    M(11),    M(12),   _______,
        _______,  KC_MUTE, KC_VOLU, RGBSWRL, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,  RESET,
        _______,   KC_WBAK, KC_VOLD, KC_WFWD, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______,                  KC_MPLY,
        _______,    TG(CAP),    _______,                      TG(GAM),                      _______,    _______,    _______,   RGB_TOG),

    [CAP] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                  _______,
        _______,    _______,    _______,                      _______,                      _______,    _______,    _______,   _______),

    [GAM] = LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_PCMM,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                  _______,
        _______,    _______,    _______,                      _______,                      _______,    _______,    _______,   _______),

    /*LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                  _______,
        _______,    _______,    _______,                      _______,                      _______,    _______,    _______,   _______),*/
};
