//
// Created by 周鲁东 on 16/1/13.
//

// main.c -- Defines the C-code kernel entry point, calls initialisation routines.
// Made for JamesM's tutorials
#include "monitor.h"
#include "descriptor_tables.h"

int kernel_main(struct multiboot *mboot_ptr)
{
    // Initialise all the ISRs and segmentation
    init_descriptor_tables();
    // Initialise the screen (by clearing it)
    monitor_clear();
    // Write out a sample string
    monitor_write("Hello, world!\n");
    monitor_write_hex((u32int)1);

    asm volatile("int $0x3");
    asm volatile("int $0x4");
    asm volatile("int $0x3");
    return 0;
}
