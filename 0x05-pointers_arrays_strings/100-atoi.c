#include "main.h"

/**
 * _atoi - Convert string to integer.
 * @s: The pointer
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int x = 0;
	unsigned int n = 0;
	int y = 1;
	int o = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			y *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			o = 1;
			n = (n * 10) + (s[x] - '0');
			x++;
		}

		if (o == 1)
		{
			break;
		}

		x++;
	}

	n *= y;
	return (n);
}
