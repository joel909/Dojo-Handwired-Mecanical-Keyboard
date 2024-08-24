// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
// KC_ESC,   KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, KC_EQUAL, KC_BACKSPACE, KC_HOME,	
//         KC_TAB,   KC_Q, KC_W ,KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LEFT_BRACKET, KC_RIGHT_BRACKET, KC_BACKSLASH, KC_DELETE, KC_END,
//         KC_CAPS_LOCK, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SEMICOLON, KC_QUOTE, KC_ENTER, KC_PAUSE, KC_PAGE_UP,
//         KC_LEFT_SHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMMA, KC_DOT, KC_SLASH, KC_RIGHT_SHIFT, KC_UP, KC_PAGE_DOWN,
//         KC_LEFT_CTRL, KC_LEFT_GUI, KC_LEFT_ALT, KC_SPACE, KC_RIGHT_ALT, KC_RIGHT_GUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT

#include QMK_KEYBOARD_H
//in the matrix of pins allocation the left one is the row and the right one is the column
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     */ 
    [0] = LAYOUT_ortho_4x4(
        KC_ESC,  KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,KC_MINUS,KC_EQUAL,KC_BACKSPACE, KC_DELETE,KC_HOME,
        KC_TAB,   KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,KC_LEFT_BRACKET,KC_RIGHT_BRACKET, KC_BACKSLASH,KC_INSERT,KC_END,
        KC_CAPS_LOCK, KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,KC_SEMICOLON,KC_QUOTE,KC_ENTER, KC_MPLY,KC_PAGE_UP,
        KC_LEFT_SHIFT, KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,KC_COMMA,KC_DOT,KC_SLASH,KC_RIGHT_SHIFT, KC_UP,KC_PAGE_DOWN,
        KC_LEFT_CTRL, KC_LEFT_GUI,KC_LEFT_ALT,KC_SPACE,KC_RIGHT_ALT,KC_RCTL,KC_RIGHT_GUI,KC_LEFT, KC_DOWN,KC_RIGHT



    )
};