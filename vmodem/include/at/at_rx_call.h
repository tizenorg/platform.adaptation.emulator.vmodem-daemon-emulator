/*
 *  telephony-emulator
 *
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact:
 * Sooyoung Ha <yoosah.ha@samsung.com>
 * YeongKyoon Lee <yeongkyoon.lee@samsung.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Contributors:
 * - S-Core Co., Ltd
 *
 */

#ifndef _AT_RX_CALL_H_
#define _AT_RX_CALL_H_

int at_rx_call_originate_exec(char* atmsg);
int at_rx_call_list_get(char* atmsg);
int at_rx_call_release_exec(char* atmsg);
int at_rx_call_answer_exec(char* atmsg);
int at_rx_call_line_id_set(char* atmsg);
int at_rx_call_line_id_get(char* atmsg);
int at_rx_call_burst_dtmf_exec(char* atmsg);

#endif
