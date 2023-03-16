#include "main.h"

/**
 * malloc_checked - cause process termination with the status value being 98
 *
 * @b: memory asigned
 * Return: a pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
