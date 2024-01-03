#include "lists.h"

listint_t *create_node(int number)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = number;
	new_node->next = NULL;
	return (new_node);
}

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = create_node(number);
	listint_t *current = *head;
	listint_t *prev = NULL;

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (current != NULL && current->n < number)
	{
		prev = current;
		current = current->next;
	}

	if (prev == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		prev->next = new_node;
		new_node->next = current;
	}

	return (new_node);
}
