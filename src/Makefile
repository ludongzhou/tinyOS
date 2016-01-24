# Makefile for JamesM's kernel tutorials.
# The C and C++ rules are already setup by default.
# The only one that needs changing is the assembler
# rule, as we use nasm instead of GNU as.

all: kernel_main.o boot.o descriptor_tables.o gdt.o interrupt.o isr.o monitor.o common.o link

.s.o:
	nasm -f elf32 $<

.c.o:
	i686-elf-gcc -c $< -std=gnu99 -ffreestanding -O2 -Wall -Wextra

link: common.o boot.o kernel_main.o descriptor_tables.o gdt.o interrupt.o isr.o monitor.o
	i686-elf-gcc -T Link.ld -o myos.bin -ffreestanding -O2 -nostdlib $^ -lgcc

clean:
	rm *.o *.bin
