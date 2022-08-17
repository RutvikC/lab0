/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#include <stdio.h>
#include "hpm.h"

int main(void) {
    hpm_init();
    printf("Hello, World!\n");
    hpm_print();

    return 0;
}
