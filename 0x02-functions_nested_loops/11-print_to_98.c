#include "main.h"

/**
 * print_to_98 - Prints natural numbers from 98.
 * @n: Number to start from.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d, ", n--);
		_putchar("%d\n", n);
	}

	else
	{
		while (n < 98)
			_putchar("%d, ", n++);
		_putchar("%d\n", n);
	}
}
