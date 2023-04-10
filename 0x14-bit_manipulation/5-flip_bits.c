#include "main.h"
/**
 * flip_bits - get from one number to another while fliping.
 * @n: the 1st number
 * @m: the 2nd number
 * Return: the number of bits to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int y, x;

	y = 0;
	res = 1;
	diff = n ^ m;
	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (res == (diff & res))
			y++;
		res <<= 1;
	}

	return (y);
}
