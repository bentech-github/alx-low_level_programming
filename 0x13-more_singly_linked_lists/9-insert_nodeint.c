#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inerts a new node at a given position
 * @head: head of the list
 * @idx: index at which to insert
 * @n: data (n) of the new node
 *
 *Return: The address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *cursor = *head;
	listint_t *upper_next = NULL;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		while (count < (idx - 1))
		{
			count++;

			cursor = cursor->next;
			if (cursor == NULL)
			{
				free(new_node);
				return (NULL);
			}
		}
		upper_next = cursor->next;
		cursor->next = new_node;
		new_node->next = upper_next;
		return (new_node);
	}
	return (new_node);
}


