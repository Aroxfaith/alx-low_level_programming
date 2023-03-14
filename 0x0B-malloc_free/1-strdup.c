#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to the new memory space
 * that contains copy of the parameter string
 * @str: the source string
 *
 * Return: returns pointer to the string duplicate
 * or NULL if the memory is not sufficient.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);
}
