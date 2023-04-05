#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _ra - reallocates memory to an array of pointers
 * to nodes on the list
 * @list: old list
 * @size: size of recent list
 * @new: new node to add to the list
 *
 * Return: points to recent list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t y;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (y = 0; y < size - 1; y++)
		newlist[i] = list[y];
	newlist[y] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - frees the linked list.
 * @head: pointer to the head/start of the list
 * Return: list size that was freed
 */
size_t free_listint_safe(listint_t **head)
{
	size_t y, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)u
	{
		for (y = 0; y < num; y++)
		{
			if (*head == list[y])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
