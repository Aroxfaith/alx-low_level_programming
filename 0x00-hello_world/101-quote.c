#include <stdio.h>
#include <unistd.h>
/**
 * main - will enter through here
 * void: when value is void, it won't accept arguments
 (* Description - prints out the last part of a quote in the standard error.)?
 *
 (* unistd header: has the function write)*
 * Return: 1
*/
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
