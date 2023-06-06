#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: beginning of the linked list
 * @n: number of nodes to add
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (temp != NULL)
	{
		temp->n = n;
		temp->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = temp;
	}
	else
		*head = temp;
	return (temp);
}
