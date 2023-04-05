#include "lists.h"

/**
 * listint_len - prints elements in linked listint_t.
 *
 * @h: points to the head
 * Return: element cloth
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
