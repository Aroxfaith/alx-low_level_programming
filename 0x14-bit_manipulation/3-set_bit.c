#include "main.h"

/**
 * set_bit - set bit value to 1 at a given index.
 * @index: index of bit you want to set
 * @n: pointer
 * Return: 1 if it worked, or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;

	return (1);
}
