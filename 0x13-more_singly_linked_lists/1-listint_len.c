#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head of the linked list
 * Return: Number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t m = 0;

	while (ptr != NULL)
	{
		m++;
		ptr = ptr->next;
	}
	return (m);
}
