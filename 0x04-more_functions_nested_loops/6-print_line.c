#include "main.h"

/**
 * print_line - Draw straight lines
 * @n: times drawn
 *
 * Return: void
 */


void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
