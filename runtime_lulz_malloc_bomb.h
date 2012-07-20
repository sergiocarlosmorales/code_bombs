#include <stdlib.h>
#define malloc malloc_bomb



static inline void *

malloc_bomb(size_t size)

{

    if (size>8) size-=8;

    return malloc(size);

}
