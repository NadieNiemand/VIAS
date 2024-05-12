/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2023 André Büsgen <andre.buesgen@posteo.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
// #define MASTER_LEFT
// #define MASTER_RIGHT
#include "config_common.h"

#define VENDOR_ID 0x4E4D
#define PRODUCT_ID 0x0000

//#define EE_HANDS

#define MASTER_LEFT

/*RGB underglow*/
#define RGB_DI_PIN D3
#define RGBLED_NUM 10
#define RGBLIGHT_ANIMATIONS
/*
#define RGBLIGHT_SLEEP
#define RGBLIGHT_TIMEOUT 30000 */
