#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /*
   ┌───────────────────────────────────────────────────────────┐
   │ q w e r t y                                               │
   └───────────────────────────────────────────────────────────┘
             ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
             │    Q    │    W    │    E    │    R    │    T    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    Y    │    U    │    I    │    O    │    P    │
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │   ESC   │    A    │    S    │    D    │    F    │    G    ├─╯                ╰─┤    H    │    J    │    K    │    L    │    ;    │    '    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
   │  SHIFT  │    Z    │    X    │    C    │    V    │    B    ││  MUTE  ││PLY/PSE ││    N    │    M    │    ,    │    .    │    /    │  SHIFT  │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   GUI   │  MO(1)  │   ALT   │  CTRL   ││   TAB   │  BKSPC  │  SPACE  │  ENTER  │
                                 └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘

   Encoders: Left = Volume Up/Down    Right = Zoom In/Out (Cmd+= / Cmd+-)
 */

    [0] = LAYOUT(
                 KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_MUTE,     KC_MPLY,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                   KC_LGUI, MO(1),   KC_LALT, KC_LCTL,     KC_TAB,    KC_BSPC, KC_SPC,  KC_ENT
    ),

 /*
   ┌───────────────────────────────────────────────────────────┐
   │ l a y e r   1                                             │
   └───────────────────────────────────────────────────────────┘
             ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
             │    1    │    2    │    3    │    4    │    5    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    6    │    7    │    8    │    9    │    0    │
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │    `    │    ▽    │    ▽    │    (    │    )    │    ▽    ├─╯                ╰─┤    ←    │    ↓    │    ↑    │    →    │    -    │    =    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
   │    ▽    │    ▽    │    ▽    │    ▽    │    ▽    │    ▽    ││   ▽    ││   ▽    ││    ▽    │    ▽    │    [    │    ]    │    \    │    ▽    │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │    ▽    │    ▽    │    ▽    │    ▽    ││    ▽    │    ▽    │    ▽    │    ▽    │
                                 └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘

   ▽ = transparent (falls through to layer 0)
 */

    [1] = LAYOUT(
                 KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                            KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_GRV,  KC_TRNS, KC_TRNS, KC_LPRN, KC_RPRN, KC_TRNS,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_MINS, KC_EQL,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,
                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // Left encoder: volume up/down
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        // Right encoder: zoom in/out (Cmd+= / Cmd+-)
        if (clockwise) {
            tap_code16(LGUI(KC_EQL));
        } else {
            tap_code16(LGUI(KC_MINS));
        }
    }
    return false;
}
#endif
