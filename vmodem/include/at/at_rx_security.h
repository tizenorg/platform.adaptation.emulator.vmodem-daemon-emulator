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

#ifndef	_AT_RX_SECURITY_H_
#define	_AT_RX_SECURITY_H_

int at_rx_sim_sec_default(char* atmsg);

int at_rx_sim_sec_imsi(char* atmsg);

int at_rx_sim_sec_pin_status(char* atmsg);

int at_rx_sim_sec_lock_info(char* atmsg);

int at_rx_sim_sec_change_password(char* atmsg);
int at_rx_sim_sec_check_password(char* atmsg);

int at_rx_sim_sec_phone_lock(char* atmsg);
int at_rx_sim_sec_phone_lock_get(char* atmsg);

int at_rx_sim_sec_rsim_access(char* atmsg);

int at_rx_sim_sec_card_type(char* atmsg);


#endif

