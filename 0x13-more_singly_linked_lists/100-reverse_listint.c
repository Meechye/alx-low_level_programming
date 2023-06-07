#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: beginning of the linked list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *initial = NULL;
	listint_t *final = NULL;

	while (*head != NULL)
	{
		final = (*head)->next;
		(*head)->next = initial;
		initial = *head;
		*head = final;
	}

	*head = initial;
	return (*head);
}
