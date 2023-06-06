#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of the linked list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t m = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		m++;
		ptr = ptr->next;
	}
	return (m);
}
