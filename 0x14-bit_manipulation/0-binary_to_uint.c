#include "main.h"

/**
 * binary_to_uint -converts a binary to unsigned int.
 * @b: points to string of 0 and 1 chars
 *
 * Return: 0 if b is NULL or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y;

	y = 0;
	if (!b)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		y <<= 1;
		if (b[x] == '1')
			y += 1;
	}
	return (y);
}
