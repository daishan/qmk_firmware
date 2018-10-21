#include "daishan.h"

void matrix_init_user(void) {
    set_unicode_input_mode(UC_LNX);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case SHRUG:
                unicode_input_start(); register_hex(0xaf); unicode_input_finish();
                TAP_ONCE(KC_BSLS);
                register_code(KC_RSFT); TAP_ONCE(KC_MINS); TAP_ONCE (KC_9); unregister_code(KC_RSFT);
                unicode_input_start(); register_hex(0x30c4); unicode_input_finish();
                register_code(KC_RSFT); TAP_ONCE(KC_0); TAP_ONCE(KC_MINS); unregister_code(KC_RSFT);
                TAP_ONCE(KC_SLSH);
                unicode_input_start(); register_hex(0xaf); unicode_input_finish();
                return false;

            case POOP:
                send_unicode_hex_string("1f4a9");
                return false;

            case FLIPTAB:
                register_code(KC_RSFT);
                TAP_ONCE(KC_9);
                unregister_code(KC_RSFT);
                process_unicode((0x256F | QK_UNICODE), record); // Arm
                process_unicode((0x00B0 | QK_UNICODE), record); // Eye
                process_unicode((0x25A1 | QK_UNICODE), record); // Mouth
                process_unicode((0x00B0 | QK_UNICODE), record); // Eye
                register_code(KC_RSFT);
                TAP_ONCE(KC_0);
                unregister_code(KC_RSFT);
                process_unicode((0x256F | QK_UNICODE), record); // Arm
                TAP_ONCE(KC_SPC);
                process_unicode((0x0361 | QK_UNICODE), record); // Flippy
                TAP_ONCE(KC_SPC);
                process_unicode((0x253B | QK_UNICODE), record); // Table
                process_unicode((0x2501 | QK_UNICODE), record); // Table
                process_unicode((0x253B | QK_UNICODE), record); // Table
                return false;

            case FLIPTA2:
                send_unicode_hex_string("0028 30CE 0CA0 75CA 0CA0 0029 30CE 5F61 253B 2501 253B");
                return false;

            case THUMBUP:
                send_unicode_hex_string("1F44D");
                return false;
        }
    }
    return true;
};
