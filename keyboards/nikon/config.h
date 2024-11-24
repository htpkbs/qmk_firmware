// Copyright 2022 Brian Reumere (@brianreumere)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MATRIX_ROWS 5
#define MATRIX_COLS 14
#define COL_EXPANDED { true, true, true, true, true, true, true, false, false, false, false, false, false, false }
#define MATRIX_ONBOARD_ROW_PINS { F7, F6, F5, F4, F1 }
#define MATRIX_ONBOARD_COL_PINS { 0, 0, 0, 0, 0, 0, 0, C6, B6, B5, B4, D7, D6, D4}
#define EXPANDER_COL_REGISTER GPIOA
#define EXPANDER_ROW_REGISTER GPIOB
#define MATRIX_EXPANDER_COL_PINS { 0, 1, 2, 3, 4, 5, 6 }
#define MATRIX_EXPANDER_ROW_PINS { 0, 1, 2, 3, 4 }