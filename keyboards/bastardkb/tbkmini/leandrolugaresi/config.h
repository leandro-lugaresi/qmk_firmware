
#pragma once
#include "config_common.h"
#define VENDOR_ID 0xA8F8
#define PRODUCT_ID 0x1828
#define DEVICE_VER 0x0001

#define MATRIX_ROWS 8
#define MATRIX_COLS 6
#define RGBLIGHT_LIMIT_VAL 180
#define MATRIX_ROW_PINS { B5, F7, F6, B6 }
#define MATRIX_COL_PINS { B4, E6, C6, B1, B3, B2 }

#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D0

#define LOCKING_SUPPORT_ENABLE
#define LOCKING_RESYNC_ENABLE
#define F_SCL 400000L
#define MASTER_RIGHT

#define PERMISSIVE_HOLD
//#define TAPPING_FORCE_HOLD
#define IGNORE_MOD_TAP_INTERRUPT

#define TAPPING_TERM 220
//#define TAPPING_TOGGLE 2
#define ONESHOT_TAP_TOGGLE 3  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 5000  /* Time (in ms) before the one shot key is released */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
