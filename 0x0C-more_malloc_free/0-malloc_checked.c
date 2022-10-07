#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Bytes to be allocated
 *
 * REturn: A pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
(
        void *t = malloc(b);

        if (t == NULL)
                exit(98);

        return (t);
)
