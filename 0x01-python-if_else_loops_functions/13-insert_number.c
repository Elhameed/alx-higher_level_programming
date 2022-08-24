#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_node - inserts a node in a linked list
 * @head: double pointer to the head of the list
 * @number: value to be added to node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *temp, *new;

	current = *head, temp = *head, new = NULL;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = number;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (current->next)
	{
		current = current->next;
		if (current->n >= number)
		{
			new->n = number;
			new->next = current;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
	}
	new = add_nodeint_end(head, number);
	return (new);
}
