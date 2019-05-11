#include "leaf60_universal.h"
#include "daishan.h"

// no split backspace -> fixed K014 to KC_NO
// no split left shift -> fixed K301 to KC_NO
#define LAYOUT_daishan( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013,       \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113,       \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211,       K213,       \
	K300,       K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313,       \
	K400, K401, K402,       K404,       K406,       K408,       K410, K411, K412, K413  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013,  KC_NO }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113,  KC_NO }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209,  K210,  K211,  KC_NO, K213,  KC_NO }, \
	{ K300,  KC_NO, K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313,  KC_NO }, \
	{ K400,  K401,  K402,  KC_NO, K404,  KC_NO, K406,  KC_NO, K408,  KC_NO, K410,  K411,  K412,  K413,  KC_NO }  \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_daishan(
        KC_GESC, ___1___, ___2___, ___3___, ___4___, ___5___, ___6___, ___7___, ___8___, ___9___, ___0___, KC_MINS, KC_EQL,    KC_BSPC,
        KC_TAB,   ___Q___, ___W___, ___E___, ___R___, ___T___, ___Y___, ___U___, ___I___, ___O___, ___P___, KC_LBRC, KC_RBRC,  KC_BSLS,
        MO(FN1),   ___A___, ___S___, ___D___, ___F___, ___G___, ___H___, ___J___, ___K___, ___L___, KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,    ___Z___, ___X___, ___C___, ___V___, ___B___, ___N___, ___M___, KC_COMM, KC_DOT,  KC_SLSH,       KC_RSFT,   MO(FN1),
        KC_LCTL,    KC_LGUI,    KC_LALT,           KC_BSPC,  MO(FN1),  KC_SPC,              KC_RALT,    MO(FN1),    MO(FN2),   KC_RCTL),

    [FN1] = LAYOUT_daishan(
        KC_GRV,  __F1___, __F2___, __F3___, __F4___, __F5___, __F6___, __F7___, __F8___, __F9___, __F10__, __F11__, __F12__,   KC_DEL,
        _______,  DESKUP,  KC_UP,   DESKDWN, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,  RESET,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______, _______,          _______,
        _______,    _______, _______, _______, _______, C(KC_B), C(KC_N), KC_DEL,  KC_END,  KC_PGDN, _______,       _______,   _______,
        _______,    _______,    _______,           _______,  _______,  _______,             _______,    _______,    __F13__,   _______),

    [FN2] = LAYOUT_daishan(
        _______, SHRUG,   POOP,    FLIPTAB, FLIPTA2, THUMBUP, M(6),    M(7),    M(8),    M(9),    M(10),    M(11),    M(12),   _______,
        _______,  KC_MUTE, KC_VOLU, RGBSWRL, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,  RESET,
        _______,   KC_MPRV, KC_VOLD, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______,       KC_MPLY,   _______,
        _______,    TG(CAP),    _______,           _______,  TG(GAM),  _______,             _______,    __F13__,    _______,   RGB_TOG),

    [CAP] = LAYOUT_daishan(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,   _______,
        _______,    _______,    _______,           _______,  _______,  _______,            _______,    _______,    _______,   _______),

    [GAM] = LAYOUT_daishan(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_PCMM,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,       _______,   _______,
        _______,    _______,    _______,           KC_SPC,   _______,  _______,             _______,    _______,    _______,   _______),
};
