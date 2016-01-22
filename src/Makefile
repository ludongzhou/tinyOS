# Makefile for JamesM's kernel tutorials.
# The C and C++ rules are already setup by default.
# The only one that needs changing is the assembler
# rule, as we use nasm instead of GNU as.

all: boot.o kernel_main.o link

kernel_main.o: common.o monitor.o
	i686-elf-gcc -c kernel_main.c -o kernel_main.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

boot.o:
	nasm -f elf32 boot.s

clean:
	rm *.o *.bin

link:
	i686-elf-gcc -T Link.ld -o myos.bin -ffreestanding -O2 -nostdlib boot.o kernel_main.o common.o monitor.o -lgcc

common.o:
	i686-elf-gcc -c common.c -o common.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

monitor.o:
	i686-elf-gcc -c monitor.c -o monitor.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra
