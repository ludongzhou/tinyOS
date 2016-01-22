//
// Created by 周鲁东 on 16/1/16.
// 这一部分是gcc的c语言拓展, 可以直接在c中调用汇编代码,并不是c标准中的. 语法就是asm [volatile] ( AssemblerTemplate
//: OutputOperands
//[ : InputOperands
//[ : Clobbers ] ])
// 这部分还没有仔细看
//

// common.c -- Defines some global functions.
// From JamesM's kernel development tutorials.

#include "common.h"

// Write a byte out to the specified port.
// 重新包装了汇编的outb指令, 是指向XX端口发出的XX数据
void outb(u16int port, u8int value)
{
    asm volatile ("outb %1, %0" : : "dN" (port), "a" (value));
}

u8int inb(u16int port)
{
    u8int ret;
    asm volatile("inb %1, %0" : "=a" (ret) : "dN" (port));
    return ret;
}

u16int inw(u16int port)
{
    u16int ret;
    asm volatile ("inw %1, %0" : "=a" (ret) : "dN" (port));
    return ret;
}

void memset()
{
    //TODO
}

void memcpy()
{
    //TODO
}

void strlen()
{
    //TODO
}

void printf()
{
    //TODO: refer this:http://read.pudn.com/downloads70/sourcecode/unix_linux/253125/linux-0.1/linux/kernel/vsprintf.c__.htm
}
