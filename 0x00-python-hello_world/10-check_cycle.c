#include "lists.h"

/**
 * check_cycle - checks if there is a cycle in a listint_t list
 * @list: pointer to list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *start = list;
	listint_t *current = list;
	
	while (current != NULL)
	{
		if (current->next == start)
			return (1);
		else
			current = current->next;
	}
	return (0);
}
