#include "main.h"

/**
 * _memset - function  that fill the first @n bytes of the memory
 *
 * @n: memory area pointed to by @s
 *
 * @s: constant
 *
 * @b: memory pointer
 *
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
