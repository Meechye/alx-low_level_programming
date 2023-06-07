#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * @head: Beginning of the linked list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
