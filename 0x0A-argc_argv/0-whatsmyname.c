#include <stdio.h>

/**
 * main - prints the name followed by another line
 * @argc: arg count
 * @argv: arg
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
