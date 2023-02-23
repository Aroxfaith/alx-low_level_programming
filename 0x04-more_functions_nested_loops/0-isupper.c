#include "main.h"
/**
 * _isupper - Checks for uppercase character.
 * @c: character to check.
 * Return: 1 else 0
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
