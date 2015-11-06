/*
 *  telephony-emulator
 *
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact:
 * Sooyoung Ha <yoosah.ha@samsung.com>
 * Sangho Park <sangho.p@samsung.com>
 * SeokYeon Hwang <syeon.hwang@samsung.com>
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

#ifndef	_SMS_TOOL_H_
#define _SMS_TOOL_H_

int MsgConvertGSM7bitToUCS2(unsigned char *pDestText, int maxLength, const unsigned char *pSrcText, int srcTextLen);
int MsgConvertGSM7bitToUTF8(unsigned char *pDestText, int maxLength,  const unsigned char *pSrcText, int srcTextLen);
int MsgConvertLocaleToUTF8(unsigned char *pDestText, int maxLength, const unsigned char *pSrcText, int srcTextLen);
int MsgConvertUCS2toGSM7bit(unsigned char *pDestText, int maxLength, const unsigned char *pSrcText, int srcTextLen, BOOL *bUnknown);
int MsgConvertUCS2toUTF8(unsigned char *pDestText, int maxLength, const unsigned char *pSrcText,  int srcTextLen);
int MsgConvertUTF8ToGSM7bit(unsigned char *pDestText, int maxLength,  const unsigned char *pSrcText, int srcTextLen);
int MsgConvertUTF8toUCS2(unsigned char *pDestText, int maxLength, const unsigned char *pSrcText, int srcTextLen);

#endif /* _SMS_TOOL_H_ */
