#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_4key(TG(5), TG(6), KC_2, KC_3, KC_4, KC_5, TO(0), TO(0), KC_6, KC_7, KC_8, KC_9, TG(4), TG(3), KC_CAPS, KC_1, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_BSPC, KC_Y, KC_U, KC_I, KC_O, KC_0, KC_BSLS, KC_GRV, KC_Q, KC_S, KC_D, KC_F, KC_G, KC_ESC, KC_ENT, KC_H, KC_J, KC_K, KC_L, KC_P, KC_SLSH, KC_LBRC, KC_A, KC_X, KC_C, KC_V, KC_B, LT(2,KC_F13), LT(2,KC_F14), KC_N, KC_M, KC_COMM, KC_DOT, KC_SCLN, KC_QUOT, KC_RBRC, LT(2, KC_Z), TT(1), KC_LALT, KC_LCTL, OSM(MOD_LSFT), KC_SPC, KC_SPC, OSM(MOD_LSFT), KC_LCTL, KC_LALT, TT(2), LT(1, KC_MINS), KC_EQL),
	[1] = LAYOUT_4key(KC_TRNS, KC_TRNS, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_CAPS, KC_F1, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_UP, KC_R, KC_Y, KC_RCTL, KC_LCTL, KC_F6, KC_F12, KC_INS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_A, KC_LEFT, KC_DOWN, KC_RGHT, KC_T, KC_APP, KC_LGUI, KC_F11, KC_PSCR, KC_DEL, KC_END, KC_PGDN, KC_LSFT, KC_RSFT, KC_Z, KC_X, KC_C, KC_V, KC_G, KC_RGUI, KC_LALT, KC_NLCK, KC_TRNS, KC_LALT, KC_LCTL, KC_F13, KC_TRNS, KC_TRNS, KC_F14, KC_RCTL, KC_RALT, KC_TRNS, KC_B, KC_RALT),
	[2] = LAYOUT_4key(KC_TRNS, KC_TRNS, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_F6, KC_F7, KC_F8, KC_F9, KC_TRNS, KC_TRNS, KC_F12, KC_F1, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_TRNS, KC_TRNS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_F10, KC_F11, KC_TILD, KC_EXLM, KC_2, KC_3, KC_4, KC_5, KC_TRNS, KC_TRNS, KC_6, KC_7, KC_8, KC_9, KC_RPRN, KC_SLSH, KC_GRV, KC_1, KC_B, KC_C, KC_D, KC_E, KC_LSFT, KC_RSFT, KC_F, KC_X, KC_COMM, KC_DOT, KC_0, KC_PIPE, KC_SCLN, KC_A, KC_TRNS, KC_LALT, KC_LCTL, KC_F13, KC_TRNS, KC_TRNS, KC_F14, KC_RCTL, KC_RALT, KC_TRNS, KC_MINS, KC_EQL),
	[3] = LAYOUT_4key(KC_TRNS, KC_TRNS, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_CAPS, KC_F1, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_Q, KC_W, KC_UP, KC_R, KC_Y, KC_RCTL, KC_LCTL, KC_F6, KC_F12, KC_INS, KC_HOME, KC_PGUP, KC_TRNS, KC_TRNS, KC_A, KC_LEFT, KC_DOWN, KC_RGHT, KC_T, KC_APP, KC_LGUI, KC_F11, KC_PSCR, KC_DEL, KC_END, KC_PGDN, KC_F13, KC_F14, KC_Z, KC_X, KC_C, KC_V, KC_G, KC_RGUI, KC_LALT, KC_NLCK, KC_TRNS, KC_RALT, KC_RCTL, KC_RSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS, KC_B, KC_RALT),
	[4] = LAYOUT_4key(KC_TRNS, KC_TRNS, KC_8, KC_9, KC_0, KC_BSLS, KC_TRNS, KC_TRNS, KC_1, KC_2, KC_3, KC_4, KC_TRNS, KC_TRNS, KC_6, KC_7, KC_I, KC_O, KC_P, KC_SLSH, KC_TRNS, KC_TRNS, KC_R, KC_E, KC_W, KC_Q, KC_5, KC_T, KC_Y, KC_U, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_TRNS, KC_TRNS, KC_F, KC_A, KC_S, KC_D, KC_TAB, KC_G, KC_H, KC_J, KC_COMM, KC_DOT, KC_MINS, KC_EQL, KC_F13, KC_F14, KC_V, KC_C, KC_X, KC_Z, KC_LSFT, KC_B, KC_N, KC_M, KC_TRNS, KC_RALT, KC_RCTL, KC_RSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS, KC_LCTL, KC_ESC),
	[5] = LAYOUT_4key(KC_TRNS, KC_TRNS, KC_8, KC_9, KC_0, KC_BSLS, KC_TRNS, KC_TRNS, KC_CAPS, KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS, KC_6, KC_7, KC_I, KC_O, KC_P, KC_SLSH, KC_TRNS, KC_TRNS, KC_GRV, KC_Q, KC_W, KC_E, KC_4, KC_5, KC_Y, KC_U, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_TRNS, KC_TRNS, KC_LBRC, KC_A, KC_S, KC_D, KC_R, KC_T, KC_H, KC_J, KC_COMM, KC_DOT, KC_MINS, KC_EQL, KC_F13, KC_F14, KC_RBRC, KC_Z, KC_X, KC_C, KC_F, KC_G, KC_N, KC_M, KC_TRNS, KC_RALT, KC_RCTL, KC_RSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS, KC_V, KC_B),
	[6] = LAYOUT_4key(KC_TRNS, KC_TRNS, KC_9, KC_8, KC_7, KC_6, KC_TRNS, KC_TRNS, KC_5, KC_4, KC_3, KC_2, KC_TRNS, KC_TRNS, KC_BSLS, KC_0, KC_O, KC_I, KC_U, KC_Y, KC_TRNS, KC_TRNS, KC_T, KC_R, KC_E, KC_W, KC_1, KC_CAPS, KC_SLSH, KC_P, KC_L, KC_K, KC_J, KC_H, KC_TRNS, KC_TRNS, KC_G, KC_F, KC_D, KC_S, KC_Q, KC_GRV, KC_QUOT, KC_SCLN, KC_DOT, KC_COMM, KC_M, KC_N, KC_F13, KC_F14, KC_B, KC_V, KC_C, KC_X, KC_A, KC_LBRC, KC_EQL, KC_MINS, KC_TRNS, KC_RALT, KC_RCTL, KC_RSFT, KC_TRNS, KC_TRNS, KC_LSFT, KC_LCTL, KC_LALT, KC_TRNS, KC_Z, KC_RBRC)
};
