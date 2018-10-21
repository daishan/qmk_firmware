#include "dz60.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

#define _______ KC_TRNS

#define ___1___ KC_1
#define ___2___ KC_2
#define ___3___ KC_3
#define ___4___ KC_4
#define ___5___ KC_5
#define ___6___ KC_6
#define ___7___ KC_7
#define ___8___ KC_8
#define ___9___ KC_9
#define ___0___ KC_0

#define ___A___ KC_A
#define ___B___ KC_B
#define ___C___ KC_C
#define ___D___ KC_D
#define ___E___ KC_E
#define ___F___ KC_F
#define ___G___ KC_G
#define ___H___ KC_H
#define ___I___ KC_I
#define ___J___ KC_J
#define ___K___ KC_K
#define ___L___ KC_L
#define ___M___ KC_M
#define ___N___ KC_N
#define ___O___ KC_O
#define ___P___ KC_P
#define ___Q___ KC_Q
#define ___R___ KC_R
#define ___S___ KC_S
#define ___T___ KC_T
#define ___U___ KC_U
#define ___V___ KC_V
#define ___W___ KC_W
#define ___X___ KC_X
#define ___Y___ KC_Y
#define ___Z___ KC_Z

#define __F1___ KC_F1
#define __F2___ KC_F2
#define __F3___ KC_F3
#define __F4___ KC_F4
#define __F5___ KC_F5
#define __F6___ KC_F6
#define __F7___ KC_F7
#define __F8___ KC_F8
#define __F9___ KC_F9
#define __F10__ KC_F10
#define __F11__ KC_F11
#define __F12__ KC_F12

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_60_ansi(
        F(0),    ___1___, ___2___, ___3___, ___4___, ___5___, ___6___, ___7___, ___8___, ___9___, ___0___, KC_MINS, KC_EQL,    KC_BSPC,
        KC_TAB,   ___Q___, ___W___, ___E___, ___R___, ___T___, ___Y___, ___U___, ___I___, ___O___, ___P___, KC_LBRC, KC_RBRC,  KC_BSLS,
        MO(1),     ___A___, ___S___, ___D___, ___F___, ___G___, ___H___, ___J___, ___K___, ___L___, KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT,    ___Z___, ___X___, ___C___, ___V___, ___B___, ___N___, ___M___, KC_COMM, KC_DOT,  KC_SLSH,                  KC_RSFT,
        KC_LCTL,    KC_LGUI,    KC_LALT,                      KC_SPC,                       KC_RALT,    MO(1),      MO(2),     KC_RCTL),

    LAYOUT_60_ansi(
        KC_GRV,  __F1___, __F2___, __F3___, __F4___, __F5___, __F6___, __F7___, __F8___, __F9___, __F10__, __F11__, __F12__,   KC_DEL,
        _______,  _______, KC_UP,   _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,  RESET,
        _______,   KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, _______, KC_INS,  KC_HOME, KC_PGUP, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, KC_DEL,  KC_END,  KC_PGDN, _______,                  _______,
        _______,    _______,    _______,                     _______,                       _______,    _______,    _______,   _______),

    LAYOUT_60_ansi(
        _______, M(1),    M(2),    M(3),    M(4),    M(5),    M(6),    M(7),    M(8),    M(9),    M(10),    M(11),    M(12),   _______,
        _______,  KC_MUTE, KC_VOLU, _______, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______,  RESET,
        _______,   KC_WBAK, KC_VOLD, KC_WFWD, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, BL_DEC,  BL_TOGG, BL_INC,  BL_STEP, _______, _______, _______, _______, _______,                  _______,
        _______,    TG(4),      _______,                      TG(3),                        _______,    _______,    _______,   RGB_TOG),

    LAYOUT_60_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,   _______,
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,
        KC_CAPS,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                  _______,
        _______,    _______,    _______,                      _______,                      _______,    _______,    _______,   _______),

    LAYOUT_60_ansi(
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

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
  }
}
