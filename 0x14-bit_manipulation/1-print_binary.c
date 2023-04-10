#include "main.h"
/**
 * _power - prints the base and power
 * @base: base
 * @pow: power
 * Return: base and power value
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int y;

	num = 1;
	for (y = 1; y <= pow; y++)
		num *= base;
	return (num);
}
/**
 * print_binary - prints a number represented in its binary form
 * @n: num to represent
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
