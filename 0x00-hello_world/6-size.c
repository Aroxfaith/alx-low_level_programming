#include <stdio.h>
/**
 * main - print size of various computer it runs on
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu btye(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %lu btye(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu btye(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu btye(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu btye(s)\n", (unsigned long)sizeof(e));
	return (0);
}
