#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: is a pointer to the list_t elements
 * Return: number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
