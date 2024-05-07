#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the linked list
 * @idx: index
 * @n: int
 *
 * Return: Always 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *prev_node;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	prev_node = *head;
	for (i = 0; i < idx - 1 && prev_node; i++)
	{
		prev_node = prev_node->next;
	}
	if (!prev_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);
}
