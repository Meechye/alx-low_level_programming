#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: beginning of the linked lists
 * @idx: is the index of the list where the new node
 * should be added.
 * @n: value for the new node to be added
 * Return: NULL, if it is not possible to add the new node at index idx
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (m = 0; temp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
