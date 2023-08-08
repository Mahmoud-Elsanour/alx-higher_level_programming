#include"lists.h"
#include <stdlib.h>
/**
 * insert_node - Inserts A node in a soreted list
 *
 * @head: pointer to head of list
 * @number: number to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current = *head;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->n < number)
		{
			if (current != tmp)
				tmp = tmp->next;
			current = current->next;
		}
		new->next = current;
		tmp->next = new;
	}
	return (new);
}
