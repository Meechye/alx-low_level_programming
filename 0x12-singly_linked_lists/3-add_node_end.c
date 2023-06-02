#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head to the link
 * @str: string
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	size_t i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new->len = i;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (*head);
}
