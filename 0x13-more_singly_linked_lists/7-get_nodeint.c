#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of the linked list.
 * @head: point to the head/first node
 * @index: node index
 *
 * Return: NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
