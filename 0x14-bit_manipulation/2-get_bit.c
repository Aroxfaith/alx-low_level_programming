#include "main.h"

/**
 * get_bit - returns the bit value at a given index.
 * @n: bits
 * @index: index of bit we want to check
 *
 * Return: value of bit at index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
