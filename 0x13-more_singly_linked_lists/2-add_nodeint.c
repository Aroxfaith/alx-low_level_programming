#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node to the listint_t list.
  *
  * @head: point to the head
  * @n: n is constant
  * Return: address or NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
