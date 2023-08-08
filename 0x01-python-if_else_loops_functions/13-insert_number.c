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
	list_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->n < number)
			current = current->next;
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
