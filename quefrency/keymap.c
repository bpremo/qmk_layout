#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define ESC_CTL MT(MOD_LCTL, KC_ESC)

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
// #define _BASE 0
// #define _FN1 1

// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
// };

 /* Layer 0: (Base Layer) Default Layer
* ,-----------------------------------------.     ,-----------------------------------------------.
* | `~  |  1  |  2  |  3  |  4  |  5  |  6  |     |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
* |-----------------------------------------'   ,-------------------------------------------------|
* |  Tab   |  Q  |  W  |  E  |  R  |  T  |      |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \   |
* |----------------------------------------.    `-------------------------------------------------|
* | Control  |  A  |  S  |  D  |  F  |  G  |      |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter   |
* |-------------------------------------------.   `-----------------------------------------------|
* |    Shift    |  Z  |  X  |  C  |  V  |  B  |      |  N  |  M  |  ,  |  .  |  /  | Shift | MO(1)|
* +-------------------------------------------'      |--------------------------------------------|
* |  MO(1) | LGui  | LAlt |  Space    | MO(2) |      |    Space     | RAlt | RGui | MO(2) | RCtrl |
* `-------------------------------------------'      `--------------------------------------------'
*/
/*
  LA1, LA2, LA3, LA4, LA5, LA6, LA7,         RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8,
  LB1, LB2, LB3, LB4, LB5, LB6,              RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8,
  LC1, LC2, LC3, LC4, LC5, LC6,              RC1, RC2, RC3, RC4, RC5, RC6,      RC8,
  LD1,      LD3, LD4, LD5, LD6, LD7,         RD1, RD2, RD3, RD4,      RD6, RD7, RD8,
  LE1, LE2, LE3,      LE5,      LE7,         RE1, RE2,      RE4, RE5, RE6, RE7, RE8
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
    KC_GRV,   KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,       KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_NO, KC_BSPC, \
    KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,              KC_Y,  KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS, \
    LCTL_T(KC_ESC),  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,              KC_H,  KC_J,  KC_K,  KC_L,     KC_SCLN,  KC_QUOT,    KC_ENT,  \
    KC_LSFT,            KC_Z,     KC_X,  KC_C,  KC_V,  KC_B,       KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH, KC_RSFT,  MO(1),  \
    MO(1),    KC_LGUI,  KC_LALT,         KC_SPC,      MO(2),       KC_SPC, KC_NO,          KC_RALT,  KC_RGUI, KC_NO,  MO(1),   KC_RCTL
  ),
  [1] = LAYOUT( /* FN */
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_NO, KC_DEL, \
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,  KC_TRNS,  KC_P0,    KC_TRNS,  RESET,   LSFT(KC_INS),\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT( /* MOUSE MODE */
    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, KC_NO,             KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
    KC_BTN1,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                    KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
    KC_BTN1,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                            KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  KC_NO,  KC_NO,  KC_NO, \
    KC_BTN2,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                            KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
    KC_NO,  KC_NO,  KC_NO,  KC_BTN2,  KC_TRNS,                            KC_NO,  KC_NO,          KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO
  )
/*   [3] = LAYOUT(  RGB
//       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, \
//       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
//       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
//       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
//       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
//   ) */
};
