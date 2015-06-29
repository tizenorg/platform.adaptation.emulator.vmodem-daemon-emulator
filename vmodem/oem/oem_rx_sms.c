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

#include "server_rx_sms.h"
#include "oem_rx_sms.h"

int oem_rx_sms_SendMsg(void * ptr_data, int data_len)
{
    return server_rx_sms_SendMsg(ptr_data, data_len);
}

int oem_rx_sms_SCA(void * ptr_data, int data_len)
{
    return server_rx_sms_SCA(ptr_data, data_len);
}

int oem_rx_sms_DR(void * ptr_data, int data_len)
{
    return server_rx_sms_DR(ptr_data, data_len);
}

int oem_rx_sms_SCA_set(char* api)
{
    return server_rx_sms_SCA_set(api);
}

int oem_rx_sms_cbsetconfig(char *api)
{
    return server_rx_sms_cbsetconfig(api);
}

int oem_rx_sms_ressvcoption(char *api)
{
    return server_rx_sms_ressvcoption(api);
}

int oem_rx_sms_param_set(char *api)
{
    return server_rx_sms_param_set(api);
}

int oem_rx_sms_param_get(char *api)
{
    return server_rx_sms_param_get(api);
}

int oem_rx_sms_memstatus(char *api)
{
    return server_rx_sms_memstatus(api);
}

int oem_rx_sms_stored_msg_status(char *api)
{
    return server_rx_sms_stored_msg_status(api);
}

int oem_rx_sms_param_count(char *api)
{
    return server_rx_sms_param_count(api);
}

int oem_rx_sms_mem_status(char *api)
{
    return server_rx_sms_mem_status(api);
}