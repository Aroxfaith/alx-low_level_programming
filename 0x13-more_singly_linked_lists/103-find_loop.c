#include "lists.h"

/**
 * find_listint_loop - locate the loop on thelist.
 * @head: pointer to the head/start of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ex, *her;

	ex = her = head;
	while (ex && her && her->next)
	{
		ex = ex->next;
		her = her->next->next;
		if (ex == her)
		{
			ex = head;
			break;
		}
	}
	if (!ex || !her || !her->next)
		return (NULL);
	while (ex != her)
	{
		ex = ex->next;
		her = her->next;
	}
	return (her);
}
