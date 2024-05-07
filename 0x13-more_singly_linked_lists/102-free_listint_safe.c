#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointer
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t c = 0;
	listint_t *tmp = NULL, *next = NULL;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	tmp = *h;
	while (tmp)
	{
		c++;
		next = tmp->next;
		free(tmp);
		if (next >= tmp)
		{
			break;
		}
		tmp = next;
	}
	*h = NULL;
	return (c);
}
