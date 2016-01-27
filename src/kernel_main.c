//
// Created by 周鲁东 on 16/1/13.
//

#include "monitor.h"
#include "descriptor_tables.h"
#include "timer.h"

int kernel_main(struct multiboot *mboot_ptr)
{
    // Initialise all the ISRs and segmentation
    init_descriptor_tables();
    // Initialise the screen (by clearing it)
    monitor_clear();
    // Write out a sample string
    monitor_write("Hello, world!\n");

    asm volatile("int $0x3");
    asm volatile("int $0x4");

    asm volatile("sti");
    init_timer(50);

    return 0;
}

