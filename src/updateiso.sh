#!/usr/bin/env bash
cp myos.bin isodir/boot/myos.bin
grub-mkrescue -o myos.iso isodir
