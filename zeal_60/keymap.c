// this is my super awesome layout for zeal60
// pretty simple with a single function layer and a dedicated layer for RGB backlight
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Layer 0: (Base Layer) Default Layer
* ,-----------------------------------------------------------------------------------------.
* | `~  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  | Backspace |
* |-----------------------------------------------------------------------------------------|
* |  Tab   |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  [  |  ]  |   \    |
* |-----------------------------------------------------------------------------------------|
* | Control  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  |  '  |   Enter    |
* |-----------------------------------------------------------------------------------------|
* |    Shift    |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  /  |     Shift     |
* +-----------------------------------------------------------------------------------------+
* |  MO(1) | LGui  | LAlt |               Space               | RAlt | RGui | MO(2) | RCtrl |
* `-----------------------------------------------------------------------------------------'
*/

[0] = LAYOUT_60_ansi(
	KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
	KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
	MO(1),   KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI, MO(2),   KC_RCTL),

// Fn1 Layer
/* Layer 1: (FN / MOD Layer)
* ,-----------------------------------------------------------------------------------------.
* | Esc | F1  | F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12 |  Delete   |
* |-----------------------------------------------------------------------------------------|
* |      |     |     |     |     |     |     | PgUp | Home |     |     |     |     |    <---+-- Shft(Ins)
* |-----------------------------------------------------------------------------------------|
* |          |     |     | PgDn |     |    | Lft | Dwn | Up  | Rght |     |     |           |
* |-----------------------------------------------------------------------------------------|
* |             |     |     |     |     |     | End |     |     |     |     |               |
* +-----------------------------------------------------------------------------------------+
* |  MO(1) |       |      |                                   |      |      | MO(2) |       |
* `-----------------------------------------------------------------------------------------'
*/

[1] = LAYOUT_60_ansi(
	KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSFT(KC_INS),
	KC_TRNS, KC_TRNS, KC_TRNS, KC_PGDN, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_END,  KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

// Fn2 Layer (zeal60 Configuration)
[2] = LAYOUT_60_ansi(
	KC_TRNS, EF_DEC,  EF_INC,  H1_DEC,  H1_INC,  H2_DEC,  H2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, BR_DEC,  BR_INC,  KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, S1_DEC,  S1_INC,  S2_DEC,  S2_INC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ES_DEC,  ES_INC,  KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

};
