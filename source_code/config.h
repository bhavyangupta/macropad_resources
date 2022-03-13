// Copyright 2022 bhavya (@bhavyangupta)
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

// ENCODERS
//
#define ENCODERS 1
#define ENCODERS_PAD_A { D0, F4}
#define ENCODERS_PAD_B { D1, F5}
#define ENCODER_RESOLUTION 4

