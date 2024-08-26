// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESCAPE,     KC_6,         KC_7,  KC_8,        KC_9,     KC_0,     KC_NO,               KC_NO,    KC_NO,         KC_NO,
        KC_GRAVE,      KC_1,         KC_2,  KC_3,        KC_4,     KC_5,     KC_MEDIA_PLAY_PAUSE, KC_NO,    KC_NO,         KC_NO,
        KC_TAB,        KC_Q,         KC_W,  KC_E,        KC_R,     KC_T,     KC_Y,                KC_U,     KC_I,          KC_O,
        KC_ENTER,      KC_A,         KC_S,  KC_D,        KC_F,     KC_G,     KC_H,                KC_J,     KC_K,          KC_L,
        KC_LEFT_SHIFT, KC_BACKSPACE, KC_Z,  KC_X,        KC_C,     KC_V,     KC_B,                KC_N,     KC_M,          KC_P,
        KC_LEFT_ALT,   KC_LEFT_CTRL, MO(1), KC_LEFT_GUI, KC_SPACE, KC_COMMA, KC_DOT,              KC_QUOTE, KC_SEMICOLON,  KC_SLASH
    ),
    [1] = LAYOUT(
        KC_F12,         KC_F6,          KC_F7,          KC_F8,           KC_F9,          KC_F10,          KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_F11,         KC_F1,          KC_F2,          KC_F3,           KC_F4,          KC_F5,           KC_KB_MUTE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,        KC_TRANSPARENT, KC_BACKSLASH,    KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,  KC_TRANSPARENT, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_MINUS,       KC_EQUAL,       KC_BACKSLASH
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(KC_WH_U, KC_WH_D)  }
};
#endif