/* 
 * test driver to debug nvram-faker code without
 * having to LD_PRELOAD a lib.
 */
#include <stdio.h>
#include <stdlib.h>

#ifndef DEBUG
#define DEBUG
#endif

#ifndef NVRAM_EXE
#define NVRAM_EXE
#endif

#include "nvram-faker-internal.h"

extern void initialize_ini(void);
extern void end(void);

char *nvram_bufget(const void *, const char *);

int main(void)
{
    char *mac = flash_read_mac(NULL);
    DEBUG_PRINTF("calling initalize_ini().\n");
    initialize_ini();
    nvram_bufget(NULL, "idontexits");
    DEBUG_PRINTF("calling end().\n");
    end();
    DEBUG_PRINTF("Done.\n");
    return 0;
}