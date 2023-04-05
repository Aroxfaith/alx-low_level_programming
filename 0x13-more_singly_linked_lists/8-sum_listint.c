#include "lists.h"

/**
 * sum_listint - sum all the data of the linked list.
 * @head: point to the head/first node
 *
 * Return: 0 if list is empty 
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
