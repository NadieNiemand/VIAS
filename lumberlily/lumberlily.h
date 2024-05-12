// Copyright 2022 Miguel (@NadieNiemand)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, \
    K100, K101, K102, K103, K104, K105, K106, K107, \
    K200, K201, K202, K203, K204, K205, K206, K207, \
    K300, K301, K302, K303, K304, K305, K306, K307, \
    K400, K401, K402, K403, K404, K405, K406, K407, \
    K500, K501, K502, K503, K504, K505, K506, K507, \
    K600, K601, K602, K603, K604, K605, K606, K607, \
    						K704, K705, K706, K707 \
) \
{ \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307 }, \
	{ K400,  K401,  K402,  K403,  K404,  K405,  K406,  K407 }, \
	{ K500,  K501,  K502,  K503,  K504,  K505,  K506,  K507 }, \
	{ K600,  K601,  K602,  K603,  K604,  K605,  K606,  K607 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K704,  K705,  K706,  K707 }  \
}

