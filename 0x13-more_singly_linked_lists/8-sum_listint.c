#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: head of the list
 *
 * Return: Always 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
