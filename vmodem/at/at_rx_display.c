/*
 *  telephony-emulator
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: 
 * Sooyoung Ha <yoosah.ha@samsung.com>
 * Sungmin Ha <sungmin82.ha@samsung.com>
 * YeongKyoon Lee <yeongkyoon.lee@samsung.com>
 * 
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 * 
 * This library is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 * Contributors:
 * - S-Core Co., Ltd
 * 
 */

/*
/////////////////////////////////////////////////////////////////////
// at_rx_display.c
*/

#include <stdlib.h>
#include <string.h>

#include "at_rx_display.h"
#include "oem_rx_display.h"

int at_rx_display_default(char* atmsg)
{
	TRACE(MSGL_VGSM_INFO, "\n");

    return 1;
}

int at_rx_display_icon_info_get(char* atmsg)
{
	TRACE(MSGL_VGSM_INFO, "\n");

	// we always response it to request type(0xff)

	return oem_rx_display_icon_info_get();
}

