#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int x)
{
	void *p;
	p = malloc(x);

	if (p == NULL)
		exit(98);

	return (p);
}
