#include QMK_KEYBOARD_H

#define _BASE 0
#define _RAISE 1
#define _LOWER 2
#define _SYM 3


#define TAB_MOD C_S_T(KC_TAB)
#define ESC_MOD LAG_T(KC_ESC)

#define KC_ML KC_MS_LEFT
#define KC_MR KC_MS_RIGHT
#define KC_MU KC_MS_UP
#define KC_MD KC_MS_DOWN
#define KC_MB1 KC_MS_BTN1
#define KC_MB2 KC_MS_BTN1

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define SYM MO(_SYM)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |  -_  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |  '"  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | FN  |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |   \   |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *                             |------+------|                             |------+------|
     *                             |      |      |                             |      |      |
     *                             +-------------+                             +-------------+
     *                                           +-------------+ +-------------+
     *                                           |      |      | |      |      |
     *                                           |------+------| |------+------|
     *                                           |      |      | |      |      |
     *                                           +-------------+ +-------------+
     */
    [_BASE] = LAYOUT(
        ESC_MOD, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
        TAB_MOD, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
            SYM, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
                                            KC_LSFT, KC_SPC,             KC_ENT,   KC_BSPC,
                                            KC_LCTL, KC_LALT,            KC_RALT,  KC_RCTL,
                                            RAISE, KC_DEL,               KC_LGUI, LOWER
    ),

    [_LOWER] = LAYOUT(
        _______, KC_F15,   KC_F7,   KC_F8,   KC_F9,   KC_F10,             _______,    KC_7,   KC_8,   KC_9,      KC_0, _______,
        _______, KC_F14,   KC_F4,   KC_F5,   KC_F6,   KC_F11,             _______,    KC_4,   KC_5,   KC_6,   KC_MINS, KC_PAST,
        _______, KC_F13,   KC_F1,   KC_F2,   KC_F3,   KC_F12,             KC_0   ,    KC_1,   KC_2,   KC_3,   KC_PLUS, KC_PSLS,
                                            _______, _______,             _______, _______,
                                            _______, _______,             _______, _______,
                                            _______, _______,             _______, _______
    ),

    [_RAISE] = LAYOUT(
        _______, _______, _______, _______, _______, _______,             KC_HOME, KC_PGUP, KC_PGDN, KC_END, _______,  _______,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, KC_MUTE,             KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT,_______,   KC_GRV,
        _______, KC_MFFD, _______, KC_MRWD, KC_VOLD, KC_VOLU,             KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, KC_BRID, KC_BRIU,
                                            _______, _______,             _______, _______,
                                            _______, _______,             _______, _______,
                                            _______, _______,             _______, _______
    ),

    [_SYM] = LAYOUT(
        _______, KC_QUOT, KC_LABK, KC_RABK, KC_DQUO, KC_DOT ,             KC_AMPR, KC_LBRC, KC_RBRC, KC_PERC, _______,_______,
        _______, KC_EXLM, KC_MINS, KC_PLUS, KC_EQL , KC_HASH,             KC_PIPE, KC_LPRN, KC_RPRN, KC_QUES,LSFT(KC_P), KC_GRV,
        _______, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, KC_AT  ,             KC_TILD, KC_LCBR, KC_RCBR, KC_DLR,   KC_EQL , _______,
                                            C(KC_END), C(KC_HOME),         KC_PGUP, KC_PGDN,
                                            _______, _______,             _______, _______,
                                            _______, _______,             _______, _______
    )
};

void persistent_default_layer_set(uint16_t default_layer) {
    eeconfig_update_default_layer(default_layer);
    default_layer_set(default_layer);
}
