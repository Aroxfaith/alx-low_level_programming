#include "main.h"

/**
 * clear_bit - sets bit value to 0 at a given index.
 * @n: num 
 * @index: index of bit you want to set
 * Return: 1 if it worked, or -1 if error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = ~(1 << index);
	*n = *n & x;

	return (1);
}
