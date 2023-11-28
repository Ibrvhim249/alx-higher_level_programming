#include "lists.h"

/**
 * insert_node - Inserts a num into a sorted singly-linked list.
 * @head: A ptr the head of the linked list.
 * @number: The num to insert.
 * Author - Ibrahim Ehab
 * Return: If the fun fails - NULL.
 *         else - a ptr to the new node.
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
		node = node->next;

	new->next = node->next;
	node->next = new;

	return (new);
}
