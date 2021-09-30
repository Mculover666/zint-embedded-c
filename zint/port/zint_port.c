#include "zint_port.h"
#include <stdlib.h>

void *zint_malloc(size_t _Size)
{
    return malloc(_Size);
}

void zint_free(void *_Memory)
{
    free(_Memory);
}