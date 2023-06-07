#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: beginning of the linked list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t m = 0;
	long int d;

	while (head)
	{
		d = head - head->next;
		m++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (d > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (m);
}
