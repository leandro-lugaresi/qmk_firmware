
/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

//homerowns default layer
#define HRL_1 LT(1,KC_A)
#define HRL_2 LT(2,KC_S)
#define HRL_3 LT(3,KC_D)
#define HRL_4 LT(4,KC_F)

#define HRR_1 LT(1,KC_SCLN) 
#define HRR_2 LT(2,KC_L)
#define HRR_3 LT(3,KC_K)
#define HRR_4 LT(4,KC_J)

// others
#define TAB_MOD LAG_T(KC_TAB)
#define ESC_MOD C_S_T(KC_ESC)
#define LSFT_MOD OSM(MOD_LSFT)
#define RSFT_MOD OSM(MOD_RSFT)
#define MT_CTL_Z MT(MOD_LCTL, KC_Z)
#define MT_SLSH MT(MOD_RCTL, KC_SLSH)
     
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_split_3x6_3(
		//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		ESC_MOD,   KC_Q,    KC_W,    KC_E,    KC_R,   KC_T, 				                    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	  TAB_MOD,  HRL_1,   HRL_2,   HRL_3,   HRL_4,   KC_G, 				                    KC_H,   HRR_4,   HRR_3,   HRR_2,   HRR_1, KC_QUOT,
		//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		LSFT_MOD, MT_CTL_Z, KC_X,    KC_C,    KC_V,   KC_B, 				                    KC_N,    KC_M, KC_COMM,  KC_DOT, MT_SLSH, RSFT_MOD,
		//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
							        KC_LALT, LAG_T(KC_SPACE), LGUI_T(KC_SPC),                  MT(MOD_RSFT, KC_ENT),  MO(2), KC_RALT
	),

	[1] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, 				                 KC_6,     KC_7,    KC_8,      KC_9,    KC_0, KC_DEL,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______,  KC_GRV, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, 		                  KC_LEFT,  KC_DOWN,   KC_UP,  KC_RIGHT, XXXXXXX, KC_GRV,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, 		                  XXXXXXX,  KC_RCTL,   KC_DOT,  KC_SLSH, _______,_______, 
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											          _______, _______, _______,                     _______, _______, _______
	),

	[2] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 _______, KC_EXLM,  KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_MINUS, KC_EQL, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 CW_TOGG, KC_GRV,    KC_LT, KC_LPRN, KC_LCBR, KC_LBRC, 		                 KC_RBRC, KC_RCBR, KC_RPRN,   KC_GT, KC_PIPE, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,			        		   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											          _______, _______, _______,                     _______, _______, _______ 
	),

	[3] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_MINUS, KC_EQL, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______, XXXXXXX,   KC_LT, KC_LPRN, KC_LCBR, KC_LBRC, 		                 KC_RBRC, KC_RCBR, KC_RPRN,   KC_GT, XXXXXXX, XXXXXXX,
	//|-----j--+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______, _______, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  	        			   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											          _______, _______, _______,                     _______, _______, _______ 
	),

	[4] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
		 _______, XXXXXXX,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                      XXXXXXX,    KC_7,    KC_8,    KC_9, KC_PAST, KC_PSLS,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______, XXXXXXX,   KC_F4,   KC_F5,   KC_F6,   KC_F11, 		                 XXXXXXX,    KC_4,    KC_5,    KC_6, KC_PMNS, XXXXXXX,
	//|-----j--+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
		 _______, _______,   KC_F1,   KC_F2,   KC_F3,   KC_F12,		        			        KC_0,    KC_1,    KC_2,    KC_3, KC_PPLS, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
											          _______, _______, _______,                     _______, _______, _______ 
	),
};
