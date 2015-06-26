/*  $Id: icons.hpp,v 1.1 2006/06/16 02:17:53 ingo Exp ingo $
**  ___  ___ _____         _ ___
** |   \| __|_   _|__  ___| | _ ) _____ __
** | |) | _|  | |/ _ \/ _ \ | _ \/ _ \ \ /
** |___/|_|   |_|\___/\___/_|___/\___/_\_\
**
**  DFToolBox - Copyright (C) 2006 Ingo Ruhnke <grumbel@gmail.com>
**
**  This program is free software; you can redistribute it and/or
**  modify it under the terms of the GNU General Public License
**  as published by the Free Software Foundation; either version 2
**  of the License, or (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program; if not, write to the Free Software
**  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
**  02111-1307, USA.
*/

#ifndef HEADER_ICONS_HPP
#define HEADER_ICONS_HPP

#include "fx.h"

const unsigned char unknown_icon_data[]={
  0x47,0x49,0x46,0x38,0x39,0x61,0x18,0x00,0x18,0x00,0xf7,0x00,0x00,0x00,0x00,0x00,
  0x4e,0x48,0x61,0x4f,0x49,0x63,0x55,0x50,0x67,0x5d,0x57,0x6d,0x57,0x51,0x71,0x5a,
  0x53,0x73,0x5a,0x54,0x73,0x5b,0x55,0x74,0x5b,0x55,0x75,0x5e,0x57,0x77,0x61,0x5b,
  0x75,0x62,0x5b,0x77,0x63,0x5d,0x77,0x60,0x59,0x79,0x62,0x5b,0x7b,0x63,0x5c,0x7a,
  0x65,0x5d,0x7d,0x66,0x60,0x7e,0x69,0x65,0x79,0x67,0x5f,0x85,0x67,0x5f,0x86,0x67,
  0x60,0x85,0x67,0x60,0x86,0x69,0x61,0x80,0x68,0x61,0x86,0x69,0x61,0x86,0x6a,0x62,
  0x87,0x6b,0x64,0x84,0x6c,0x65,0x84,0x6d,0x66,0x87,0x69,0x62,0x88,0x69,0x63,0x88,
  0x6a,0x62,0x88,0x6d,0x65,0x88,0x6c,0x64,0x8a,0x6c,0x65,0x8a,0x6d,0x65,0x8b,0x6e,
  0x67,0x8c,0x6e,0x67,0x8d,0x6f,0x67,0x8c,0x6f,0x67,0x8d,0x6e,0x69,0x85,0x6e,0x68,
  0x86,0x70,0x69,0x86,0x71,0x6a,0x88,0x72,0x6b,0x88,0x71,0x69,0x8e,0x71,0x69,0x8f,
  0x71,0x6a,0x8e,0x71,0x6a,0x8f,0x72,0x69,0x8e,0x72,0x6a,0x8e,0x73,0x6c,0x8a,0x73,
  0x6c,0x91,0x74,0x6c,0x90,0x74,0x6c,0x91,0x75,0x6e,0x91,0x76,0x6e,0x93,0x76,0x6f,
  0x92,0x76,0x6f,0x93,0x77,0x6e,0x93,0x77,0x6f,0x93,0x78,0x75,0x87,0x79,0x70,0x95,
  0x79,0x71,0x95,0x78,0x71,0x96,0x79,0x71,0x96,0x78,0x72,0x94,0x7b,0x73,0x97,0x7b,
  0x75,0x96,0x7d,0x77,0x97,0x7b,0x73,0x98,0x7c,0x73,0x98,0x7d,0x76,0x99,0x7f,0x77,
  0x9b,0x7f,0x79,0x95,0x7f,0x78,0x9a,0x80,0x77,0x9c,0x81,0x77,0x9c,0x81,0x79,0x9b,
  0x80,0x78,0x9c,0x81,0x78,0x9c,0x83,0x7a,0x9e,0x83,0x7a,0x9f,0x87,0x7f,0x9e,0x85,
  0x7d,0xa0,0x85,0x7d,0xa1,0x86,0x7c,0xa0,0x86,0x7c,0xa1,0x86,0x7d,0xa0,0x86,0x7d,
  0xa1,0x87,0x83,0x93,0x86,0x82,0x95,0x87,0x81,0x9b,0x8e,0x89,0xa4,0x8e,0x89,0xa5,
  0x90,0x8b,0xa6,0x91,0x8b,0xaa,0x92,0x8c,0xa8,0x94,0x8e,0xa9,0x94,0x8e,0xad,0x95,
  0x90,0xab,0x98,0x92,0xad,0x98,0x93,0xae,0x9e,0x9b,0xa8,0x9b,0x95,0xb0,0x9d,0x98,
  0xb1,0x9e,0x9a,0xb1,0x9e,0x98,0xb4,0xa2,0x9d,0xb6,0xa4,0x9d,0xb9,0xa6,0x9f,0xba,
  0xa9,0xa6,0xb4,0xad,0xab,0xb6,0xb0,0xad,0xbb,0xb7,0xb4,0xc5,0xcc,0xc9,0xd6,0xd6,
  0xd4,0xdb,0xdc,0xdb,0xe4,0xde,0xdd,0xe5,0xe0,0xdf,0xe7,0xf0,0xf0,0xf3,0xf9,0xf8,
  0xfa,0xfa,0xf9,0xfb,0xfa,0xfa,0xfb,0xfc,0xfc,0xfc,0xfe,0xfe,0xfe,0xff,0xff,0xff,
  0xcc,0xcc,0xcc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x21,0xf9,0x04,
  0x01,0x00,0x00,0x81,0x00,0x21,0xfe,0x89,0x54,0x6f,0x6f,0x6c,0x62,0x61,0x72,0x2d,
  0x73,0x69,0x7a,0x65,0x64,0x20,0x69,0x63,0x6f,0x6e,0x0a,0x3d,0x3d,0x3d,0x3d,0x3d,
  0x3d,0x3d,0x3d,0x3d,0x3d,0x3d,0x3d,0x0a,0x0a,0x28,0x63,0x29,0x20,0x32,0x30,0x30,
  0x33,0x20,0x4a,0x61,0x6b,0x75,0x62,0x20,0x27,0x6a,0x69,0x6d,0x6d,0x61,0x63,0x27,
  0x20,0x53,0x74,0x65,0x69,0x6e,0x65,0x72,0x2c,0x20,0x0a,0x68,0x74,0x74,0x70,0x3a,
  0x2f,0x2f,0x6a,0x69,0x6d,0x6d,0x61,0x63,0x2e,0x6d,0x75,0x73,0x69,0x63,0x68,0x61,
  0x6c,0x6c,0x2e,0x63,0x7a,0x0a,0x0a,0x63,0x72,0x65,0x61,0x74,0x65,0x64,0x20,0x77,
  0x69,0x74,0x68,0x20,0x74,0x68,0x65,0x20,0x47,0x49,0x4d,0x50,0x2c,0x0a,0x68,0x74,
  0x74,0x70,0x3a,0x2f,0x2f,0x77,0x77,0x77,0x2e,0x67,0x69,0x6d,0x70,0x2e,0x6f,0x72,
  0x67,0x00,0x2c,0x00,0x00,0x00,0x00,0x18,0x00,0x18,0x00,0x00,0x08,0xfe,0x00,0x03,
  0x09,0x1c,0x48,0xb0,0xa0,0xc1,0x83,0x08,0x13,0x2a,0x5c,0xa8,0x10,0x80,0xc3,0x87,
  0x10,0x23,0x3a,0x34,0x28,0xb1,0xa2,0x44,0x82,0x0e,0xd9,0x7c,0xf9,0x02,0x06,0xcc,
  0x46,0x8f,0x20,0x3d,0xaa,0x80,0x38,0xd0,0x61,0x18,0x0a,0x17,0x2a,0x50,0xc8,0x70,
  0xc4,0x88,0x85,0x0b,0x16,0x2c,0x54,0xb0,0x50,0x80,0xa4,0x40,0x87,0x63,0x36,0x84,
  0x08,0x41,0x44,0x0f,0x20,0x40,0x78,0x72,0x7c,0xd8,0x09,0xc2,0x80,0xcd,0x40,0x0e,
  0xc9,0x8c,0x28,0x41,0x62,0x04,0x9d,0x1f,0x69,0x00,0xc5,0xd1,0x40,0xa2,0x6a,0x82,
  0xa3,0x0e,0xcd,0x98,0x38,0x91,0x22,0x85,0x89,0x03,0x4c,0x00,0xc9,0x41,0x90,0x02,
  0x85,0x09,0x05,0x58,0x01,0x9c,0x81,0x11,0x43,0xc6,0x0b,0x1a,0x3b,0xf2,0xf4,0x99,
  0x80,0x60,0x06,0x0c,0x18,0x0e,0xd2,0xa2,0xc1,0xc1,0xf7,0x86,0x8d,0x3a,0x7e,0xba,
  0x04,0x10,0xc1,0x17,0xc7,0x83,0xb4,0x6a,0x7c,0xf0,0xe8,0xa1,0xa3,0xc9,0x9f,0x39,
  0x02,0x38,0x30,0xd6,0xc1,0x23,0x42,0xda,0x35,0x43,0x86,0x00,0x01,0x02,0x65,0x0f,
  0x17,0x08,0x41,0x84,0x00,0x09,0x12,0x44,0x42,0xda,0x36,0x48,0x90,0x24,0x29,0x52,
  0x44,0xc9,0x00,0x0f,0xaa,0x93,0xa4,0xc6,0x90,0xd6,0x8d,0x94,0x28,0xb7,0xc5,0xf0,
  0xb9,0xb3,0x44,0xca,0xed,0x27,0x4e,0x3a,0xa4,0x7d,0x33,0x85,0xca,0x94,0x29,0x65,
  0xfa,0xd8,0x61,0x40,0xa5,0x79,0xf3,0x15,0x69,0xe1,0x64,0xd9,0x72,0x65,0x8b,0x96,
  0x2a,0x04,0x1a,0x6c,0xb1,0x62,0x05,0x8b,0x95,0x16,0x69,0xbd,0x1c,0xd4,0x18,0x4f,
  0x9e,0x85,0x0b,0xf2,0xe3,0x17,0xa4,0xb5,0xc8,0x7e,0xe2,0xcd,0xf6,0xed,0x31,0xc2,
  0xaf,0x48,0x71,0xfe,0x51,0x86,0x0c,0x03,0x02,0x00,0x3b
  };

const unsigned char okicon_data[]={
  0x47,0x49,0x46,0x38,0x39,0x61,0x30,0x00,0x30,0x00,0x84,0x11,0x00,0x00,0x00,0x00,
  0x00,0x01,0x00,0x00,0x04,0x01,0x01,0x06,0x02,0x02,0x12,0x07,0x05,0x24,0x0f,0x06,
  0x27,0x10,0x0f,0x5f,0x28,0x11,0x6e,0x2e,0x13,0x77,0x32,0x13,0x78,0x32,0x13,0x7b,
  0x34,0x14,0x82,0x36,0x15,0x84,0x37,0x16,0x89,0x39,0x1a,0xa8,0x46,0x1b,0xa9,0x47,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x21,0xf9,0x04,
  0x01,0x0a,0x00,0x1f,0x00,0x2c,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x05,
  0xea,0xe0,0x27,0x8e,0x64,0x69,0x9e,0x68,0xaa,0xae,0x6c,0xeb,0xbe,0x70,0x2c,0xcf,
  0x74,0x3d,0x42,0x38,0x6e,0xd3,0x79,0xbe,0xcb,0xbd,0xde,0x09,0x40,0x2c,0x1a,0x8f,
  0xc8,0xa4,0x91,0x11,0xf4,0x99,0x94,0xd0,0xa8,0x71,0xf1,0x68,0xea,0x9e,0x80,0x1f,
  0xc9,0x7a,0x1d,0x66,0xb5,0x1f,0xee,0x8a,0x08,0x16,0x8f,0xbf,0x3b,0xab,0x8b,0x9c,
  0x6e,0x16,0xd6,0x68,0x5e,0xd3,0x10,0x80,0xdb,0xd4,0x6c,0x56,0x1e,0xd8,0x14,0xed,
  0x55,0x7f,0x30,0x7d,0x7e,0x71,0x29,0x10,0x0e,0x09,0x72,0x42,0x23,0x81,0x25,0x5c,
  0x10,0x2f,0x83,0x8c,0x85,0x8e,0x8f,0x5d,0x86,0x92,0x84,0x2a,0x96,0x4e,0x28,0x6a,
  0x25,0x8d,0x37,0x9c,0x9d,0x95,0x8b,0xa0,0x94,0x5b,0xa3,0xa4,0x22,0x9f,0xa7,0x9b,
  0xaa,0x97,0x61,0x99,0x24,0xa1,0x26,0x07,0x0d,0x9c,0xa2,0x41,0x29,0xb5,0xa0,0x02,
  0xb2,0x66,0xc0,0xa6,0x58,0x76,0xac,0x62,0xad,0x5e,0xc5,0xc6,0x7d,0xb3,0xc4,0x2d,
  0x7f,0xb0,0x67,0xca,0xba,0x8f,0x7a,0xa8,0xc9,0xa5,0xd5,0xd2,0xcf,0xa8,0x96,0xdc,
  0xd3,0xd4,0xcd,0xd8,0xd6,0x27,0xde,0xe4,0xdf,0xe5,0xc8,0x80,0xd7,0xce,0x26,0xc1,
  0xdb,0xe7,0xee,0xea,0xbc,0xec,0xae,0xe9,0xbb,0xe0,0xf4,0x4a,0x0a,0x4d,0x04,0x52,
  0x47,0x70,0x94,0x20,0x68,0x32,0xe0,0x9f,0x91,0x1f,0xf3,0xc0,0x60,0xc2,0xa7,0x90,
  0x85,0xb8,0x86,0x10,0x23,0x4a,0x9c,0x48,0x51,0x61,0x08,0x00,0x3b
};

const unsigned char cancelicon_data[]={
  0x47,0x49,0x46,0x38,0x39,0x61,0x30,0x00,0x30,0x00,0x80,0x01,0x00,0x00,0x00,0x00,
  0xff,0xff,0xff,0x21,0xfe,0x15,0x43,0x72,0x65,0x61,0x74,0x65,0x64,0x20,0x77,0x69,
  0x74,0x68,0x20,0x54,0x68,0x65,0x20,0x47,0x49,0x4d,0x50,0x00,0x21,0xf9,0x04,0x01,
  0x0a,0x00,0x01,0x00,0x2c,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,0x02,0x80,
  0x8c,0x8f,0xa9,0xcb,0xed,0x0f,0xa3,0x9c,0xb4,0xda,0x8b,0xb3,0xde,0xbc,0x5b,0x00,
  0x86,0xe2,0x48,0x96,0xa4,0x64,0xa6,0x6a,0x89,0x02,0x1e,0x02,0xb6,0xef,0x11,0x47,
  0xf5,0x7c,0x3f,0xb9,0xb7,0x37,0x3d,0xf7,0x5b,0x04,0x35,0xc3,0x44,0x11,0x73,0xa4,
  0xb9,0x66,0x81,0xa4,0xc1,0x59,0x81,0x42,0x29,0xd2,0x25,0xce,0xaa,0xc3,0xf2,0xb4,
  0x3e,0x2e,0xd0,0x2b,0x04,0x13,0xc5,0x46,0x32,0xd2,0xac,0x64,0x36,0xd1,0x4f,0x76,
  0xd4,0x3d,0x9d,0x54,0xd5,0x73,0x66,0xfd,0x2a,0xb3,0xc3,0xdd,0xd4,0x3d,0xdd,0xaf,
  0x97,0x87,0x67,0xc3,0x27,0x07,0x38,0x08,0x11,0x27,0x98,0xf5,0xd7,0xb2,0xf2,0x98,
  0xe2,0x08,0x39,0x29,0xa2,0x66,0x79,0x89,0x99,0xa9,0xb9,0xc9,0xd9,0xc9,0x59,0x00,
  0x00,0x3b
};

const unsigned char kianicon_data[]={
  0x47,0x49,0x46,0x38,0x39,0x61,0x30,0x00,0x30,0x00,0xe7,0xfe,0x00,0x0d,0x12,0x14,
  0x10,0x12,0x0f,0x13,0x11,0x14,0x15,0x11,0x0f,0x1a,0x10,0x11,0x13,0x14,0x12,0x18,
  0x14,0x13,0x1f,0x11,0x13,0x1c,0x13,0x13,0x1a,0x16,0x0f,0x1f,0x14,0x0f,0x23,0x13,
  0x10,0x17,0x19,0x17,0x27,0x12,0x11,0x1d,0x19,0x18,0x27,0x16,0x0f,0x2b,0x14,0x0f,
  0x22,0x18,0x14,0x21,0x18,0x19,0x1f,0x1a,0x15,0x26,0x17,0x15,0x2b,0x1a,0x13,0x27,
  0x1c,0x14,0x21,0x1e,0x1d,0x23,0x1e,0x19,0x30,0x19,0x15,0x28,0x1d,0x19,0x27,0x1d,
  0x1e,0x32,0x1a,0x11,0x35,0x19,0x12,0x24,0x20,0x1f,0x2f,0x1d,0x16,0x26,0x21,0x1b,
  0x29,0x23,0x1e,0x2f,0x20,0x22,0x28,0x24,0x23,0x37,0x1f,0x16,0x32,0x21,0x1a,0x34,
  0x21,0x16,0x2c,0x23,0x23,0x2e,0x23,0x1f,0x3b,0x1e,0x17,0x37,0x20,0x1c,0x2b,0x26,
  0x21,0x3d,0x24,0x1b,0x30,0x2a,0x24,0x2e,0x2b,0x29,0x3b,0x27,0x1c,0x3c,0x26,0x21,
  0x35,0x29,0x25,0x37,0x2a,0x22,0x35,0x2b,0x2c,0x44,0x26,0x1e,0x33,0x2d,0x27,0x46,
  0x26,0x1a,0x41,0x28,0x1e,0x43,0x2a,0x1b,0x38,0x32,0x2c,0x3c,0x30,0x2c,0x4c,0x2b,
  0x1f,0x45,0x2d,0x28,0x47,0x2d,0x23,0x3a,0x31,0x31,0x4b,0x2b,0x24,0x3f,0x32,0x29,
  0x55,0x2a,0x22,0x41,0x35,0x31,0x53,0x2e,0x29,0x51,0x30,0x24,0x3e,0x38,0x32,0x53,
  0x31,0x20,0x56,0x2f,0x25,0x3c,0x39,0x38,0x41,0x37,0x38,0x4c,0x34,0x2c,0x50,0x34,
  0x26,0x5c,0x35,0x2b,0x59,0x37,0x2a,0x41,0x41,0x3a,0x62,0x34,0x27,0x57,0x3a,0x26,
  0x46,0x3f,0x3a,0x5e,0x37,0x27,0x49,0x3e,0x3c,0x64,0x3b,0x2c,0x4b,0x45,0x3f,0x6a,
  0x3b,0x2e,0x51,0x45,0x41,0x54,0x43,0x45,0x4f,0x49,0x43,0x65,0x42,0x30,0x55,0x4b,
  0x4b,0x6f,0x41,0x3a,0x53,0x4d,0x47,0x72,0x42,0x2f,0x60,0x4a,0x3d,0x72,0x43,0x34,
  0x59,0x4c,0x48,0x63,0x4e,0x47,0x72,0x4d,0x38,0x5c,0x55,0x4e,0x60,0x53,0x4e,0x7c,
  0x4b,0x37,0x81,0x49,0x38,0x7b,0x4c,0x3d,0x66,0x54,0x54,0x83,0x4c,0x34,0x62,0x5b,
  0x55,0x76,0x53,0x4a,0x65,0x5a,0x5a,0x67,0x5a,0x56,0x83,0x51,0x3d,0x6b,0x5c,0x52,
  0x8c,0x4e,0x44,0x6c,0x5f,0x5b,0x69,0x62,0x5c,0x6c,0x63,0x57,0x8f,0x55,0x43,0x74,
  0x5f,0x59,0x8a,0x58,0x43,0x8e,0x56,0x49,0x71,0x62,0x58,0x92,0x56,0x3f,0x89,0x59,
  0x49,0x71,0x64,0x5f,0x87,0x5c,0x53,0x9a,0x59,0x4a,0x71,0x6a,0x63,0x73,0x6a,0x5e,
  0x7c,0x66,0x5e,0x76,0x68,0x64,0x79,0x69,0x5f,0x9c,0x5d,0x45,0x7c,0x6f,0x6b,0x9a,
  0x66,0x53,0x80,0x70,0x66,0x84,0x6e,0x66,0xa6,0x62,0x4a,0xab,0x60,0x48,0x7a,0x74,
  0x67,0xa1,0x67,0x4d,0x82,0x70,0x72,0xa2,0x66,0x53,0x85,0x70,0x6e,0x82,0x76,0x71,
  0x88,0x77,0x6d,0x8c,0x75,0x6d,0xb1,0x6a,0x49,0x91,0x74,0x6e,0xb4,0x6c,0x52,0x8b,
  0x7d,0x78,0x8f,0x7f,0x75,0xb2,0x73,0x57,0x92,0x7e,0x7b,0x95,0x7e,0x76,0xbc,0x72,
  0x51,0x99,0x80,0x72,0xc5,0x70,0x53,0xb1,0x7a,0x5e,0xbd,0x75,0x5b,0xba,0x79,0x5c,
  0x93,0x87,0x83,0xa0,0x82,0x7c,0x97,0x87,0x7d,0x9c,0x85,0x7d,0xb0,0x7f,0x6a,0x9f,
  0x88,0x79,0xa6,0x86,0x7a,0xbe,0x81,0x5a,0xc1,0x80,0x65,0xa5,0x8c,0x7e,0x9f,0x8f,
  0x85,0xa5,0x8d,0x86,0xd5,0x7d,0x5d,0xcc,0x81,0x61,0xac,0x8c,0x80,0xba,0x8a,0x6b,
  0xa4,0x92,0x82,0xb0,0x91,0x8a,0xcc,0x89,0x6c,0xdc,0x85,0x58,0xae,0x94,0x86,0xa6,
  0x97,0x91,0xc9,0x8a,0x7c,0xda,0x87,0x62,0xeb,0x85,0x5a,0xe2,0x88,0x65,0xd4,0x90,
  0x71,0xb3,0x9b,0x93,0xb7,0x9c,0x8e,0xbb,0x9b,0x90,0xde,0x91,0x68,0xcf,0x97,0x73,
  0xe7,0x8e,0x64,0xdf,0x90,0x71,0xb6,0xa3,0x93,0xae,0xa5,0xa0,0xdb,0x9a,0x6d,0xbb,
  0xa3,0x9a,0xb7,0xa5,0x9b,0xc0,0xa6,0x97,0xef,0x9d,0x6c,0xb5,0xb0,0xaf,0xcc,0xab,
  0x8c,0xd9,0xa7,0x80,0xe9,0xa2,0x70,0xe7,0xa3,0x7e,0xd3,0xac,0x87,0xcf,0xab,0x99,
  0xd8,0xa7,0x99,0xc6,0xaf,0xac,0xc5,0xb2,0xa2,0xc8,0xb0,0xa7,0xcb,0xb0,0xa1,0xef,
  0xa6,0x7a,0xf6,0xa4,0x7e,0xf0,0xb2,0x7c,0xf8,0xb0,0x8d,0xed,0xb6,0x8d,0xfb,0xb1,
  0x85,0xca,0xc0,0xbd,0xd6,0xbd,0xae,0xd2,0xc0,0xb5,0xf9,0xb7,0x8e,0xe1,0xc7,0xa3,
  0xf4,0xc3,0x8e,0xde,0xc9,0xb9,0xe3,0xc8,0xb1,0xd3,0xce,0xcd,0xff,0xc6,0x9d,0xf8,
  0xcb,0x9f,0xe7,0xd2,0xc1,0xea,0xd1,0xcc,0xf7,0xd5,0xa1,0xe7,0xd6,0xcb,0xe7,0xd7,
  0xd2,0xdd,0xdc,0xda,0xf8,0xd8,0xa9,0xed,0xdc,0xc4,0xe6,0xe2,0xe0,0xef,0xdf,0xd9,
  0xf4,0xe1,0xc2,0xf0,0xe0,0xd4,0xf5,0xe6,0xd3,0xfb,0xea,0xba,0xef,0xec,0xe8,0xf5,
  0xec,0xde,0xfb,0xf1,0xe1,0xfa,0xf3,0xeb,0xfe,0xf5,0xd9,0xf9,0xf5,0xf3,0xfb,0xfb,
  0xf1,0xff,0xfb,0xfa,0xf9,0xfe,0xff,0xff,0xfd,0xff,0xfd,0xff,0xfc,0x21,0xfe,0x15,
  0x43,0x72,0x65,0x61,0x74,0x65,0x64,0x20,0x77,0x69,0x74,0x68,0x20,0x54,0x68,0x65,
  0x20,0x47,0x49,0x4d,0x50,0x00,0x2c,0x00,0x00,0x00,0x00,0x30,0x00,0x30,0x00,0x00,
  0x08,0xfe,0x00,0x35,0x68,0x40,0xa1,0x43,0x47,0x8c,0x16,0x08,0x73,0x14,0x89,0x92,
  0xa5,0x0b,0x99,0x32,0x65,0xdc,0xc8,0xe1,0x23,0x68,0xe2,0xa1,0x48,0x97,0x46,0x69,
  0xe2,0xc4,0x89,0x94,0x29,0x53,0xb5,0x78,0x45,0x82,0x33,0x28,0x92,0xb7,0x7e,0xff,
  0x52,0xaa,0xfc,0xe7,0xc1,0x85,0x8f,0x97,0x2e,0x46,0xb8,0x40,0x82,0x24,0x4a,0x95,
  0x86,0x61,0xd6,0xcc,0x99,0x33,0x68,0x10,0xa0,0x9f,0x82,0x20,0x69,0xf2,0xc8,0x8a,
  0x93,0xaa,0x58,0xa3,0x46,0x5d,0x12,0x24,0xa8,0xd0,0x21,0x5b,0xfa,0x56,0xaa,0x44,
  0x11,0x43,0x88,0x41,0x17,0x31,0x74,0x08,0x41,0xe2,0xc4,0x66,0x96,0x2c,0x10,0xd7,
  0xf0,0xc9,0x23,0x88,0x0f,0x9d,0x41,0x82,0x10,0x5d,0x32,0xb5,0x6a,0x14,0xa9,0x5a,
  0xb5,0x44,0x89,0xca,0x64,0xc9,0xd2,0x9f,0x43,0xef,0xa4,0xa6,0x9c,0xe1,0x63,0xc6,
  0x08,0x0f,0x21,0x5e,0xfa,0xd0,0x41,0x93,0xe6,0x14,0x24,0x57,0xb6,0x64,0xd9,0xd2,
  0x65,0x71,0x1b,0xb1,0x41,0x35,0x69,0x12,0xc5,0x6a,0xd8,0x2b,0x5f,0xc7,0x78,0xad,
  0x5a,0x54,0x28,0xaf,0xde,0x18,0x35,0x4e,0x80,0x00,0xb1,0x22,0xc7,0xcb,0x1a,0xa6,
  0x8b,0x20,0x51,0xed,0x84,0x6b,0x95,0x2e,0xb0,0xc9,0xac,0x19,0x14,0x68,0x90,0x24,
  0x49,0x46,0x59,0x5d,0x1e,0xc6,0x69,0x54,0x28,0x4b,0xec,0xf4,0xfe,0x9b,0x21,0xda,
  0x83,0x4c,0x1f,0x35,0x5a,0xf8,0xc8,0x51,0x63,0x75,0xcd,0x2a,0x61,0xdc,0x3c,0xa6,
  0xb3,0x06,0x0e,0xd9,0x42,0x85,0x1e,0x51,0xd2,0x24,0xab,0x1a,0x35,0x5e,0xa4,0x56,
  0xfe,0xad,0x0a,0x15,0x8a,0xdb,0x3f,0x7f,0xfe,0x56,0xa2,0xc0,0x30,0x01,0x44,0x88,
  0x16,0x2e,0x5c,0xc0,0x2f,0x92,0xc3,0x89,0x93,0x2a,0x5b,0xe6,0xf0,0xc1,0xfe,0x67,
  0x0e,0x99,0x34,0x64,0x3c,0xb4,0xc6,0x1a,0x72,0xe4,0x21,0x49,0x24,0xb1,0xb0,0x52,
  0xd9,0x30,0x4a,0x11,0x53,0x8f,0x5e,0x7f,0x61,0x70,0x82,0x4c,0x35,0xc4,0x17,0xdf,
  0x42,0x51,0x90,0xc1,0x87,0x1c,0x05,0xc2,0xe1,0x06,0x1c,0x73,0x54,0x27,0x07,0x1d,
  0xfb,0x1d,0x82,0xc8,0x23,0x83,0xf4,0x67,0xc9,0x28,0xc7,0x0c,0x33,0x5e,0x70,0x52,
  0xa1,0x80,0xc2,0x09,0x21,0xc4,0xe0,0x42,0x85,0xf0,0x71,0x05,0xdb,0x1a,0x80,0xc8,
  0xa1,0xdf,0x20,0x63,0xc9,0x91,0xc6,0x62,0xb2,0xe5,0x71,0x49,0x2c,0x9a,0x48,0x92,
  0xc7,0x1a,0x4c,0x1d,0xc2,0x62,0x28,0xca,0xa4,0xb7,0xd2,0x09,0x27,0xac,0x30,0x61,
  0x7c,0xf0,0xe5,0x90,0x43,0x43,0x59,0x04,0x58,0xdd,0x21,0x85,0xc8,0x41,0x46,0x15,
  0x4e,0xe4,0x10,0x43,0x56,0x53,0xc0,0xb1,0xa2,0x26,0x8f,0xcc,0x41,0xc7,0x1f,0xa1,
  0x44,0x62,0xca,0x25,0x90,0xd4,0x83,0x9e,0x4a,0x23,0x50,0x39,0x42,0x08,0x20,0xb8,
  0xb4,0x9a,0x10,0x5f,0x5d,0x71,0x85,0x18,0x3a,0x2d,0x99,0x05,0x10,0x31,0xa0,0x50,
  0x01,0x05,0x0d,0x34,0x2a,0x42,0x18,0x7c,0x68,0x54,0x48,0x1e,0x7f,0x40,0x62,0xe9,
  0x28,0x96,0x28,0x23,0xd5,0x09,0x03,0xfd,0xe5,0x01,0x0a,0x35,0x10,0x56,0x84,0x10,
  0x42,0x2c,0xb4,0x05,0x19,0x70,0x84,0x01,0x44,0x09,0x25,0x64,0xd0,0x41,0x06,0xfe,
  0x1c,0x98,0x60,0x42,0x05,0x0b,0x4c,0x50,0x84,0x1c,0xa4,0x48,0xc2,0x94,0x1c,0x7f,
  0x5c,0xa2,0x49,0x24,0xa1,0xbc,0x73,0xe7,0x3f,0x23,0x6c,0x40,0x01,0x7b,0xee,0x61,
  0x75,0x63,0xa8,0x42,0x74,0x25,0x04,0x0c,0xae,0x72,0xa0,0x82,0x0a,0x30,0xd0,0x60,
  0xad,0x0a,0x1a,0x2c,0x70,0x80,0x02,0x33,0x18,0x59,0x88,0x20,0x3b,0xd5,0xc5,0xab,
  0x79,0xfc,0xa4,0x44,0xa3,0x04,0x12,0x6c,0xf0,0x57,0x08,0x2e,0xac,0x00,0x5f,0x7c,
  0x30,0x94,0xc0,0x41,0x07,0x29,0xa4,0xc0,0x02,0x0e,0x44,0x48,0xd1,0xc4,0x12,0x2f,
  0x94,0x60,0x01,0x01,0x04,0x0c,0x90,0x00,0x12,0x82,0xe8,0x3a,0x87,0x1c,0x18,0x45,
  0x52,0x08,0x31,0xfa,0xf4,0x53,0xae,0x68,0x11,0x60,0xe0,0xc1,0x40,0x21,0xac,0x80,
  0x55,0x0c,0x21,0x38,0x40,0x41,0x06,0x2a,0xd4,0xdb,0xf1,0x0d,0x3d,0x28,0x01,0x03,
  0x0a,0x16,0x34,0xf0,0xc0,0x03,0x01,0x07,0xc0,0x40,0x15,0x85,0x40,0xf2,0x07,0xaf,
  0x17,0x41,0x12,0x2c,0x4a,0xff,0x9c,0xb0,0x01,0x08,0x18,0x84,0xb0,0xc1,0x06,0x03,
  0xf9,0xc5,0xc0,0x00,0x04,0x2c,0x30,0x2f,0xbd,0x1d,0xb0,0xaa,0x41,0x04,0x08,0x1c,
  0x70,0x40,0xa3,0x10,0x34,0x70,0x40,0x02,0x40,0x47,0xc1,0xd4,0x1f,0x6d,0x54,0x4d,
  0x20,0xb9,0xff,0x68,0x70,0x81,0x06,0xa3,0x81,0xb0,0x73,0x08,0x1e,0x18,0x00,0x00,
  0x00,0x03,0x1c,0x00,0x41,0x06,0x19,0xd8,0x4b,0xab,0xd2,0x04,0x24,0x80,0x01,0xa3,
  0x0d,0x68,0x4b,0x00,0x00,0x01,0x4c,0x40,0xc6,0x1f,0x78,0xbb,0xa1,0xb7,0xfe,0x1d,
  0xd2,0xd0,0x3c,0x81,0x06,0x1e,0x6c,0xe0,0x81,0x07,0x18,0xa0,0x70,0x74,0x02,0x12,
  0x04,0xac,0x74,0x03,0x1c,0x90,0x50,0xc2,0x02,0x03,0x0c,0x20,0x01,0x0a,0x51,0x3c,
  0x62,0x87,0x12,0x43,0x70,0xd0,0x80,0x00,0x9c,0x07,0xd0,0xc2,0x6c,0x72,0xac,0xe1,
  0x86,0x24,0xa7,0x48,0xa3,0x12,0x60,0x20,0x6c,0xcd,0xb5,0x07,0x08,0x50,0x40,0x81,
  0x03,0x91,0x13,0xa0,0x40,0x03,0x3b,0x1c,0x41,0x02,0x05,0x09,0x80,0x20,0x83,0x12,
  0x62,0x04,0x52,0xca,0x2e,0xae,0x58,0x91,0x41,0xc0,0x63,0x0b,0x10,0x85,0x87,0x7a,
  0x47,0xa2,0x89,0x2d,0xe7,0xfd,0x03,0xc2,0xe0,0x12,0x8f,0x70,0x81,0x01,0x06,0x20,
  0xa0,0xc0,0x03,0x09,0x28,0xa0,0x00,0x01,0x2c,0xbc,0xc1,0x08,0x18,0x4c,0x50,0x81,
  0xc6,0x1e,0x86,0x38,0x92,0x8a,0x33,0xd9,0x5c,0xc3,0x88,0x0a,0x0a,0x90,0x2d,0x80,
  0xca,0x55,0xc0,0x01,0xc7,0x1a,0x88,0xd8,0xf1,0x48,0x54,0xfe,0xb8,0xe7,0x41,0x7b,
  0x1e,0x44,0xa0,0x00,0x02,0x0d,0x70,0x1d,0x05,0x4e,0xf6,0x80,0x1f,0x38,0x02,0x18,
  0x93,0x98,0xc4,0x26,0x30,0x81,0x09,0x61,0x64,0xa3,0x1c,0xe6,0x48,0x47,0x36,0x36,
  0x41,0x83,0xb9,0x05,0xe0,0x7d,0x01,0x70,0xc1,0x43,0xca,0x60,0x87,0x32,0xf0,0xc1,
  0x33,0xc6,0x01,0x1c,0x60,0x2e,0x80,0x80,0x05,0x7c,0xa0,0x02,0x0f,0xf8,0x80,0xac,
  0x3e,0xa0,0x04,0x4f,0x3c,0xe3,0x17,0xb4,0x68,0x86,0x33,0x76,0xf1,0x40,0x73,0x94,
  0xa3,0x1c,0xd7,0x20,0x04,0x0c,0x22,0x07,0x00,0x01,0x0c,0x00,0x00,0xfe,0x0c,0x08,
  0x50,0x97,0xec,0xe0,0x06,0xf3,0xfc,0x63,0x02,0x84,0xc3,0xc0,0x68,0x1c,0x90,0x80,
  0xd6,0x3d,0xa0,0x02,0x29,0x20,0x42,0x0f,0x58,0xd0,0x04,0x54,0x68,0x23,0x18,0xb9,
  0x68,0xc6,0x36,0x66,0x98,0x0d,0x07,0x5e,0xa3,0x15,0x67,0x18,0xde,0xfb,0xc8,0xf6,
  0x43,0xfc,0x4c,0x81,0x83,0x6e,0x20,0x46,0x4a,0x94,0x28,0x10,0x0f,0xe0,0x0c,0x01,
  0x06,0x58,0xc0,0x03,0x48,0xa0,0x05,0x2d,0x2c,0xe1,0x06,0x4c,0x58,0x46,0x3b,0xb0,
  0x98,0x8c,0x62,0x08,0x23,0x15,0xb3,0x10,0xc6,0x27,0x5c,0x91,0x08,0x2a,0x54,0x60,
  0x00,0x9c,0x1b,0x40,0x00,0xc8,0xe6,0x83,0x2e,0x6c,0x61,0x0b,0xf2,0x83,0x0a,0xb1,
  0xfe,0x22,0x90,0x0d,0x48,0xe0,0x00,0x0b,0x58,0x00,0x09,0x8e,0xe0,0x05,0x2a,0xdc,
  0x80,0x05,0x4f,0x78,0x06,0x3d,0xac,0x11,0x8c,0x60,0xe0,0xa2,0x15,0x95,0xd8,0x44,
  0x27,0x1c,0x51,0x07,0x33,0x1c,0x41,0x01,0x8a,0xec,0xe1,0x0f,0x03,0xe0,0x80,0x29,
  0xe0,0x47,0x3f,0x92,0x5c,0x41,0x08,0xa2,0x17,0x82,0x08,0x10,0xe0,0x00,0x15,0xa0,
  0x81,0x14,0xac,0xf0,0x83,0x17,0xdc,0xc0,0x0b,0xa2,0xc4,0x46,0x29,0x71,0xd1,0x89,
  0x44,0x38,0x53,0x0f,0x68,0xa0,0x02,0x0d,0x10,0x80,0xc8,0x00,0x2c,0x52,0x00,0x40,
  0xbc,0x02,0x6c,0x06,0x61,0x07,0x5b,0xd8,0x29,0x26,0xee,0x09,0xc1,0x08,0x12,0x40,
  0x80,0x07,0xe0,0x80,0x09,0x60,0xd0,0xc2,0x0f,0x7e,0x00,0x05,0x43,0x8c,0x23,0x1f,
  0xe1,0x28,0xc6,0x2e,0x36,0x31,0x09,0x42,0x38,0xf3,0x0e,0x60,0xfe,0x18,0x82,0x0a,
  0x08,0xe0,0x43,0x1f,0x22,0xf2,0x7d,0x51,0x28,0xc3,0x16,0x7a,0x62,0x89,0x77,0xf4,
  0x03,0x67,0x83,0xdb,0x93,0x01,0x14,0x50,0x01,0x22,0x78,0xc1,0x0b,0x46,0x20,0xc1,
  0x0f,0x98,0xc0,0x08,0x70,0xdc,0xa3,0x1d,0xcc,0x40,0x85,0x22,0x3a,0x51,0x09,0x67,
  0x9e,0x81,0x0a,0x47,0xf8,0x40,0x2c,0x17,0x49,0xb6,0x0b,0x16,0x61,0x0b,0x5f,0x28,
  0x43,0xcb,0x82,0x03,0x3d,0x3e,0x79,0x40,0x00,0x04,0x28,0x01,0x11,0xa8,0xe0,0x05,
  0x22,0xb0,0x4a,0x05,0x41,0x30,0x04,0x2c,0x3c,0x71,0x07,0x33,0x10,0xe2,0x13,0x9f,
  0x60,0x44,0x4f,0xa5,0x70,0x84,0x0a,0xf4,0x93,0x73,0x02,0x28,0x40,0x02,0x0c,0xb0,
  0xa5,0x2e,0x94,0xe1,0x10,0x05,0xed,0xc7,0x08,0x30,0x70,0x01,0xe3,0xc0,0xae,0x75,
  0x38,0x90,0x82,0x14,0x88,0x90,0x82,0x0c,0x5c,0x6f,0x5a,0x14,0x28,0x81,0x1a,0x30,
  0x01,0x8a,0x4a,0x10,0x22,0x0e,0x4f,0x38,0x02,0x0d,0x2c,0x50,0x4d,0x45,0xfa,0x10,
  0x88,0x45,0x80,0x8e,0x18,0x0a,0x61,0x8b,0xf4,0x8c,0x00,0x04,0x48,0xf4,0x40,0x01,
  0x02,0xa0,0x80,0x05,0x98,0xe0,0x06,0xeb,0x64,0x01,0x0b,0x4a,0x70,0x32,0x15,0x30,
  0xe1,0x0e,0xa0,0x40,0x05,0x26,0x08,0xa1,0x86,0x33,0x48,0xc1,0x06,0x29,0x80,0x1c,
  0x36,0xdd,0xca,0xb9,0x02,0x3c,0xa7,0x0c,0x83,0x08,0x8e,0x3f,0x12,0x0a,0xb6,0x0b,
  0xca,0xae,0x02,0x2a,0xbc,0xc1,0x27,0x77,0xd0,0x04,0x26,0xbc,0x01,0x16,0xcc,0x60,
  0x06,0x30,0x40,0xa1,0x07,0x2f,0xa4,0x15,0xb2,0x88,0xfc,0xfe,0x27,0x36,0x5f,0x7a,
  0x81,0x28,0x24,0xc1,0x09,0x5f,0x20,0x06,0x3f,0xec,0x3a,0x82,0x11,0xac,0xc0,0x01,
  0x8b,0xfc,0xe5,0x02,0x20,0x40,0x02,0x1c,0xd8,0x60,0x09,0x66,0x28,0xc5,0x32,0xc0,
  0x01,0x8e,0x76,0xa0,0x0f,0x15,0x6f,0xa0,0x02,0x13,0x86,0x60,0x03,0x0e,0xc4,0xb6,
  0x87,0x06,0x10,0xc0,0x05,0x1c,0x30,0x83,0x2c,0x30,0x24,0x14,0xf5,0xe8,0x87,0xc3,
  0xdc,0xb8,0x82,0x11,0x14,0x40,0x91,0xd5,0x5b,0x80,0xff,0x16,0x00,0xb7,0x1e,0x1c,
  0x22,0x10,0xeb,0x64,0x82,0x17,0xc0,0xf7,0x04,0x2f,0x1c,0x81,0x05,0x92,0xf5,0x67,
  0x02,0xe4,0xd3,0x02,0xfc,0x64,0xc1,0x41,0xf5,0xc0,0x47,0x54,0xaa,0x3a,0x02,0xd8,
  0x45,0x0e,0x01,0x25,0x7c,0x40,0x04,0x28,0x00,0x03,0x25,0x28,0x81,0x07,0x2a,0x50,
  0xc2,0x17,0xd8,0xc0,0x85,0x21,0x30,0x01,0x0d,0x0f,0x1d,0x42,0x09,0x22,0x07,0x34,
  0xa0,0xed,0xb7,0x08,0x5d,0x9a,0xc3,0x1f,0xbc,0x61,0x0f,0x79,0x08,0x58,0x1f,0xd0,
  0x23,0xa9,0x0f,0x93,0xf6,0x81,0x56,0xfd,0x00,0x0f,0xb7,0x88,0x86,0x37,0xc8,0x81,
  0x8e,0x68,0xe0,0x81,0x0b,0x7b,0x60,0xec,0x19,0x6c,0x40,0x4d,0xa4,0x0a,0xc0,0x01,
  0x80,0x99,0x42,0x1a,0x7a,0x35,0x8c,0x71,0x9c,0x03,0x1e,0xfc,0xd0,0x87,0x3e,0x24,
  0x66,0x60,0xce,0x11,0x00,0x01,0x11,0xc8,0x80,0x09,0x54,0x50,0x81,0x0a,0xfc,0x80,
  0x0b,0x7d,0xe8,0x43,0x85,0x8d,0x80,0x86,0x38,0xd4,0xe1,0x0d,0x5a,0x78,0x80,0x0f,
  0x03,0xa6,0x48,0x06,0x84,0x20,0x09,0x61,0xb0,0x03,0xfe,0x24,0x56,0x51,0x64,0x71,
  0xd4,0xe3,0x1e,0xfa,0xe0,0x87,0xdb,0x2e,0xe8,0xcf,0x01,0xf4,0xb5,0x02,0x26,0xc0,
  0x81,0x0a,0x3e,0xf0,0x80,0x46,0x65,0x00,0x06,0x47,0x40,0x43,0x1d,0x06,0xed,0x05,
  0x1a,0x90,0x54,0x96,0x03,0x88,0x40,0x77,0xd3,0x50,0x88,0xca,0x4c,0xc3,0x1d,0xf7,
  0xd8,0x87,0x3d,0xec,0xb1,0x8f,0x09,0x30,0xe0,0x82,0x00,0x00,0x18,0xd0,0x14,0x10,
  0xd6,0x1d,0xfc,0xa0,0x07,0x9f,0x84,0xc1,0x0e,0xb4,0xa0,0x07,0x42,0x10,0xa2,0x0e,
  0x67,0x60,0xc2,0x01,0x3a,0x8c,0x48,0x03,0x30,0xa0,0x05,0x42,0x48,0xc3,0x23,0x2e,
  0xd1,0x8b,0x73,0xb8,0xc3,0x1e,0xf3,0xd8,0xc7,0x3d,0x02,0x7c,0x81,0x09,0xf0,0xf3,
  0x9f,0x00,0x33,0x9b,0x09,0x7e,0x40,0x85,0x3d,0x38,0x62,0x0f,0x63,0x70,0x44,0x20,
  0x5d,0xc1,0x08,0x3d,0x80,0xc1,0x02,0xb2,0x3c,0xc0,0x06,0x14,0x60,0x00,0x0f,0x24,
  0x61,0x0b,0x96,0x60,0x05,0x2f,0x8c,0x71,0x0e,0x79,0x98,0x18,0x1f,0xf7,0xb0,0xc7,
  0x3b,0x1c,0x70,0xde,0x31,0x07,0x0c,0x60,0x0b,0x28,0xc1,0x12,0xc0,0xc0,0x88,0x59,
  0x80,0xc2,0x10,0xb3,0xc8,0xc6,0x37,0x76,0x41,0x88,0x37,0xf4,0xa0,0xc7,0x01,0x48,
  0x00,0x03,0x1c,0xb0,0x01,0x1f,0x6c,0xe1,0x11,0xab,0xb0,0x85,0x31,0xa4,0x21,0x8e,
  0x5b,0xe3,0x03,0x1f,0xf2,0x50,0x07,0x3c,0x80,0x4b,0xc6,0x60,0x67,0xef,0x7a,0x2c,
  0x90,0x82,0x21,0x52,0xe1,0x09,0x43,0x80,0x62,0x17,0xc2,0xa8,0x44,0x74,0xb3,0x4b,
  0xb7,0x1f,0x0e,0xc0,0x01,0x3e,0x50,0xa9,0x2d,0xfe,0x8e,0x31,0x70,0x63,0x78,0xe3,
  0x1c,0x93,0xc6,0xc7,0x3a,0xd0,0xb1,0xf0,0x7f,0x02,0xed,0x97,0x04,0x90,0x80,0xf6,
  0x2a,0xc0,0x01,0x25,0xa0,0xe1,0x0d,0x63,0x18,0x83,0x17,0xd0,0xa0,0x85,0x26,0x3c,
  0x80,0xc3,0x3f,0x66,0x00,0x03,0x46,0xb0,0x05,0x39,0x3c,0x22,0x13,0xdb,0x36,0x06,
  0x35,0xc4,0x71,0x0e,0xa6,0x9f,0x83,0x1a,0xea,0x50,0x07,0x87,0x5f,0xae,0x3d,0xed,
  0x2d,0xce,0x02,0x0f,0x80,0xc1,0x0b,0x60,0x70,0x83,0x17,0x6c,0xdd,0x04,0x06,0x88,
  0x5c,0x52,0xe3,0xe3,0xef,0x3f,0x3c,0xa2,0x11,0x99,0x60,0x05,0x35,0xb8,0xe1,0x0b,
  0x59,0x50,0x63,0x18,0xc8,0xa0,0x06,0x32,0xce,0x71,0x8e,0x09,0x28,0x32,0x00,0x2f,
  0xff,0x65,0x04,0x16,0xd0,0xd7,0xbe,0xc6,0x4d,0xbd,0x0b,0xa8,0x00,0x0c,0x28,0x10,
  0x5b,0x07,0x8c,0x00,0x09,0x53,0x10,0x82,0x1d,0x04,0x81,0x76,0xa4,0x43,0xc3,0x18,
  0xac,0x20,0x85,0x2a,0x6a,0xf1,0x0a,0x59,0xf8,0xc2,0xdb,0x5a,0x4b,0xc0,0x5e,0xf1,
  0x9e,0xbd,0x03,0xf8,0x0f,0xe6,0x4f,0x06,0x58,0x04,0x96,0xa0,0x05,0x16,0x00,0xcd,
  0xf0,0x5b,0x08,0x43,0x1b,0xd2,0xd0,0x88,0x42,0x58,0x82,0x32,0xc6,0x20,0x39,0x29,
  0x38,0x61,0x0a,0x55,0x9c,0x42,0x15,0xd4,0x98,0x87,0x3a,0x50,0x70,0xd7,0xa5,0x5e,
  0x30,0x00,0xd5,0x43,0x00,0x39,0x61,0xa9,0x69,0x05,0xc0,0xa0,0xe7,0x25,0x08,0x80,
  0x04,0x7c,0x90,0x84,0x34,0xa4,0xa1,0x0d,0x8d,0x78,0x04,0x22,0x2c,0x91,0x09,0x52,
  0x20,0x03,0xee,0xaa,0x98,0xbc,0xed,0x4f,0x37,0x41,0x0d,0x79,0xa0,0x63,0x03,0x33,
  0x00,0x9b,0xef,0xdf,0x27,0x00,0x03,0xb4,0xed,0xe5,0x76,0x56,0xc1,0x12,0x94,0x20,
  0x03,0xc4,0xcd,0x00,0x0b,0x69,0x78,0xa4,0x20,0x50,0x84,0x08,0x51,0x4c,0xc6,0x18,
  0xd3,0xa0,0x06,0x35,0xaa,0x01,0x0d,0x51,0xbc,0x42,0x14,0xdd,0xd0,0x74,0x01,0x01,
  0x00,0x3b
};


// File Save
const unsigned char filesave[]={
  0x47,0x49,0x46,0x38,0x37,0x61,0x10,0x00,0x10,0x00,0xf2,0x00,0x00,0xb2,0xc0,0xdc,
  0x00,0x00,0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x80,0x80,0x80,0xff,0xff,0xff,0x00,
  0x00,0x00,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x00,0x03,
  0x42,0x08,0xaa,0xb1,0xfe,0x4c,0x34,0x06,0xa3,0x90,0x20,0xcc,0x1a,0xae,0xc4,0x95,
  0x75,0x6d,0x8f,0xa6,0x79,0x64,0xa6,0x0d,0x44,0x87,0x9a,0x0c,0xc1,0x9a,0xb4,0x3c,
  0x05,0x33,0xad,0xd7,0x43,0x50,0x0c,0xbf,0x20,0x10,0xb8,0x6a,0x0d,0x85,0x42,0x8d,
  0x11,0x79,0xec,0x65,0x7a,0x4c,0x64,0x23,0xb0,0x6c,0x26,0x55,0xd6,0xe6,0x6d,0xc7,
  0x55,0x24,0x00,0x00,0x3b
  };


// File Open
const unsigned char fileopen[]={
  0x47,0x49,0x46,0x38,0x37,0x61,0x10,0x00,0x10,0x00,0xf2,0x00,0x00,0xb2,0xc0,0xdc,
  0x00,0x00,0x00,0x00,0xff,0x00,0xff,0xff,0x00,0x80,0x80,0x80,0xff,0xff,0xff,0x00,
  0x00,0x00,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x00,0x03,
  0x45,0x08,0xba,0x1c,0xfe,0x2c,0xae,0x20,0x44,0x90,0x91,0xd6,0x8b,0x95,0xb6,0x1c,
  0x00,0x79,0x95,0x25,0x3e,0x03,0x31,0x3c,0xa5,0x73,0xaa,0xf0,0xda,0xae,0x5e,0xfa,
  0xdc,0xb8,0xa3,0x06,0xc5,0xd0,0xff,0x3e,0x9f,0xc3,0x16,0x04,0x02,0x75,0x81,0xa2,
  0xb2,0x77,0x49,0xf2,0x96,0xc5,0x26,0x21,0x69,0x54,0x36,0xa9,0x50,0xa6,0xe7,0x59,
  0xfd,0x71,0x72,0x60,0x4e,0x02,0x00,0x3b
  };

/* Generated by reswrap from file bigfolder.gif */
const unsigned char bigfolder[]={
  0x47,0x49,0x46,0x38,0x37,0x61,0x20,0x00,0x20,0x00,0xf2,0x00,0x00,0xb2,0xc0,0xdc,
  0x80,0x80,0x80,0xff,0xff,0xff,0xff,0xff,0x00,0xc0,0xc0,0xc0,0x00,0x00,0x00,0x80,
  0x80,0x00,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x00,0x20,0x00,0x20,0x00,0x00,0x03,
  0x83,0x08,0xba,0xdc,0xfe,0x30,0xca,0x49,0x6b,0x0c,0x38,0x67,0x0b,0x83,0xf8,0x20,
  0x18,0x70,0x8d,0x37,0x10,0x67,0x8a,0x12,0x23,0x09,0x98,0xab,0xaa,0xb6,0x56,0x40,
  0xdc,0x78,0xae,0x6b,0x3c,0x5f,0xbc,0xa1,0xa0,0x70,0x38,0x2c,0x14,0x60,0xb2,0x98,
  0x32,0x99,0x34,0x1c,0x05,0xcb,0x28,0x53,0xea,0x44,0x4a,0xaf,0xd3,0x2a,0x74,0xca,
  0xc5,0x6a,0xbb,0xe0,0xa8,0x16,0x4b,0x66,0x7e,0xcb,0xe8,0xd3,0x38,0xcc,0x46,0x9d,
  0xdb,0xe1,0x75,0xba,0xfc,0x9e,0x77,0xe5,0x70,0xef,0x33,0x1f,0x7f,0xda,0xe9,0x7b,
  0x7f,0x77,0x7e,0x7c,0x7a,0x56,0x85,0x4d,0x84,0x82,0x54,0x81,0x88,0x62,0x47,0x06,
  0x91,0x92,0x93,0x94,0x95,0x96,0x91,0x3f,0x46,0x9a,0x9b,0x9c,0x9d,0x9e,0x9a,0x2e,
  0xa1,0xa2,0x13,0x09,0x00,0x3b
  };


const unsigned char minidoc1[]={
  0x47,0x49,0x46,0x38,0x37,0x61,0x10,0x00,0x10,0x00,0xf1,0x00,0x00,0xbf,0xbf,0xbf,
  0x00,0x00,0x00,0xff,0xff,0xff,0x7f,0x7f,0x7f,0x2c,0x00,0x00,0x00,0x00,0x10,0x00,
  0x10,0x00,0x00,0x02,0x39,0x84,0x8f,0x89,0xc1,0x1d,0x7a,0x82,0x98,0x93,0x41,0x20,
  0x87,0x16,0xf2,0x29,0x49,0x71,0xcd,0x27,0x68,0x9b,0x16,0x0c,0x09,0x18,0x56,0xea,
  0x52,0x9a,0x5b,0xba,0xb6,0x14,0x0d,0xcb,0xf3,0x1b,0xd9,0x6e,0xad,0x1b,0x70,0x78,
  0x06,0x56,0x0b,0x17,0x71,0x28,0x89,0x86,0xa0,0xec,0x02,0x05,0x14,0x00,0x00,0x3b
};

/* Generated by reswrap from file minifolderopen.gif */
const unsigned char minifolderopen[]={
  0x47,0x49,0x46,0x38,0x37,0x61,0x10,0x00,0x10,0x00,0xf2,0x00,0x00,0xb2,0xc0,0xdc,
  0x00,0x00,0x00,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xd9,0xd9,0xd9,0xff,0xff,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x00,0x03,
  0x42,0x08,0xba,0xdc,0x2c,0x10,0xba,0x37,0x6a,0x15,0x13,0x88,0x41,0x4a,0x27,0x43,
  0x14,0x29,0x9b,0x67,0x82,0x56,0x18,0x68,0xdc,0xe9,0x12,0x42,0x20,0xce,0x62,0x11,
  0x6f,0x69,0x1e,0xc3,0x72,0xfb,0xb9,0xb2,0x18,0xeb,0x47,0xbc,0xad,0x4a,0xc4,0x93,
  0x6c,0xc5,0x7a,0x99,0x62,0x4c,0x1a,0x2d,0xc0,0x04,0x50,0xaf,0x58,0x6c,0x66,0xcb,
  0x6d,0x24,0x00,0x00,0x3b
};

/* Generated by reswrap from file minifolderclosed.gif */
const unsigned char minifolderclosed[]={
  0x47,0x49,0x46,0x38,0x37,0x61,0x10,0x00,0x10,0x00,0xf2,0x00,0x00,0xb2,0xc0,0xdc,
  0x80,0x80,0x80,0xc0,0xc0,0xc0,0xff,0xff,0x00,0x00,0x00,0x00,0xff,0xff,0xff,0x00,
  0x00,0x00,0x00,0x00,0x00,0x2c,0x00,0x00,0x00,0x00,0x10,0x00,0x10,0x00,0x00,0x03,
  0x3b,0x08,0xba,0xdc,0x1b,0x10,0x3a,0x16,0xc4,0xb0,0x22,0x4c,0x50,0xaf,0xcf,0x91,
  0xc4,0x15,0x64,0x69,0x92,0x01,0x31,0x7e,0xac,0x95,0x8e,0x58,0x7b,0xbd,0x41,0x21,
  0xc7,0x74,0x11,0xef,0xb3,0x5a,0xdf,0x9e,0x1c,0x6f,0x97,0x03,0xba,0x7c,0xa1,0x64,
  0x48,0x05,0x20,0x38,0x9f,0x50,0xe8,0x66,0x4a,0x75,0x24,0x00,0x00,0x3b
};

namespace Icon {
extern FXIcon* folder_open;
extern FXIcon* folder_closed;
extern FXIcon* unknown_document;

extern FXIcon* new_file;
extern FXIcon* load_file;
extern FXIcon* save_file;
extern FXIcon* delete_file;

extern FXIcon* export_file;
extern FXIcon* import_file;

extern FXIcon* zoom_in;
extern FXIcon* zoom_out;
extern FXIcon* zoom_1_1;

extern FXIcon* grayscale;
extern FXIcon* normalmap;

extern FXIcon* editable;
extern FXIcon* indent;

extern FXIcon* play;
extern FXIcon* stop;
extern FXIcon* pause;

extern FXIcon* icons_list;
extern FXIcon* icons_detail;
extern FXIcon* icons_large;

extern FXIcon* collapse_tree;
extern FXIcon* expand_tree;

extern FXIcon* search_forward;
extern FXIcon* search_backward;

extern FXIcon* go;
extern FXIcon* up;
extern FXIcon* cancel;

extern FXIcon* large_folder;
extern FXIcon* large_file;
extern FXIcon* large_shark;

extern FXIcon* unknown;

extern FXIcon* dftoolbox;
extern FXIcon* dftoolbox_mini;

extern FXIcon* dfmodtool;
extern FXIcon* dfmodtool_mini;

extern FXIcon* dreamfall;

void init(FXApp*);
void deinit();

} // namespace Icon

#endif

/* EOF */
