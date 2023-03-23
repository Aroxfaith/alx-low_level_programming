#include "function_pointers.h"

/**
 * array_iterator - a function given as a
 * parameter on each array element.
 *
 * @array: array to execute func on
 * @size: is the size of the array
 * @action:  is the pointer to the function we are using
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
