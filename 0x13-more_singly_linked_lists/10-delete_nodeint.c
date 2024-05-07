#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node of a linked list
 * @head: head of a list
 * @index: unsigned int
 *
 * Return: 1 if succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *next_node;
	unsigned int i;

	if (!head || !*head)
	{
		return (-1);
	}
	if (!index)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
		return (1);
	}
	t = *head;
	for (i = 0; i < index - 1 && t; i++)
	{
		t = t->next;
	}
	if (!t || t->next == NULL)
	{
		return (-1);
	}
	next_node = t->next->next;
	free(t->next);
	t->next = next_node;
	return (1);
}
