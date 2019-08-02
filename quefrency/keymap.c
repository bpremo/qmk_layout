#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

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
* |  MO(1) | LGui  | LAlt |  Space    |  Sp   |      |    Space     | RAlt | RGui | MO(2) | RCtrl |
* `-------------------------------------------'      `--------------------------------------------'
*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( /* Base */
    KC_GRV,   KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,       KC_7,  KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,  KC_BSPC, KC_BSPC, \
    KC_TAB,   KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,              KC_Y,  KC_U,  KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC, KC_BSLS, \
    KC_LCTL,  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,              KC_H,  KC_J,  KC_K,  KC_L,     KC_SCLN,  KC_QUOT,           KC_ENT,  \
    KC_LSFT,            KC_Z,     KC_X,  KC_C,  KC_V,  KC_B,       KC_N,  KC_M,  KC_COMM,  KC_DOT,   KC_SLSH, KC_RSFT,   MO(1),  \
    MO(1),    KC_LGUI,  KC_LALT,  KC_SPC,  KC_SPC,    KC_SPC,      KC_SPC,         KC_RALT,  -----, KC_RGUI,  MO(2),   KC_RCTL
  ),
  [1] = LAYOUT( /* FN */
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,  KC_DEL, KC_DEL, \
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGUP,  KC_HOME,  KC_TRNS,  KC_P0,    KC_TRNS,  RESET,   LSFT(KC_INS),\
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_PGDN,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_END,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [2] = LAYOUT( /* RGB */
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, \
      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS
  )
};
