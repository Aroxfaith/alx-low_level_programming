#include "function_pointers.h"

/**
  * int_index - returns index of the first element
  * @array: function arrays used
  * @size: number of array element
  * @cmp: pointer to function used to compare values
  *
  * Return: -1 if size less or equals 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
