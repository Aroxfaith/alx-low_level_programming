#include "main.h"

/**
 * print_alphabet_x10 - function that prints x 10
 */
void print_alphabet_x10(void)
{
	int x;
	char j;

	for (x = 1; x <= 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}

}
