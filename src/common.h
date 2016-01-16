//
// Created by 周鲁东 on 16/1/16.
//

#ifndef TINYOS_COMMON_H
#define TINYOS_COMMON_H
// Some nice typedefs, to standardise sizes across platforms.
// These typedefs are written for 32-bit X86.
typedef unsigned int   u32int;
typedef          int   s32int;
typedef unsigned short u16int;
typedef          short s16int;
typedef unsigned char  u8int;
typedef          char  s8int;

void outb(u16int port, u8int value);
u8int inb(u16int port);
u16int inw(u16int port);
#endif //TINYOS_COMMON_H
