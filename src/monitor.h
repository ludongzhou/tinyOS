//
// Created by 周鲁东 on 16/1/16.
//

#ifndef TINYOS_MONITOR_H
#define TINYOS_MONITOR_H

#include "common.h"

// Write a single character out to the screen.
void monitor_put(char c);

// Clear the screen to all black.
void monitor_clear();

// Output a null-terminated ASCII string to the monitor.
void monitor_write(char *c);

#endif //TINYOS_MONITOR_H
