#ifndef ZINT_PORT_H
#define ZINT_PORT_H

#include <stdint.h>
#include <stdio.h>

void *zint_malloc(size_t _Size);
void zint_free(void *_Memory);

#define zint_printf(...)    printf(...)

#endif /* ZINTCONFIG_H */
