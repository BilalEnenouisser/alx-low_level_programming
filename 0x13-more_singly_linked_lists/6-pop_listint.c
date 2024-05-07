#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: head of linked list
 *
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int data;

	if (!head || !*head)
	{
		return (0);
	}
	t = *head;
	data = t->n;
	*head = (*head)->next;
	free(t);
	return (data);
}
