// Copyright 2023 Miguel Pérez (@NadieNiemand)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "config_common.h"

#define VENDOR_ID 0x4E4D
#define PRODUCT_ID 0x0000

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { D3, D2, D1, D0, F5 } // arriba a abajo
#define MATRIX_COL_PINS { D4, C6, D7, E6, B4, B5, F6, F7, B1, B3, B2, B6} //izq a derecha
//#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE