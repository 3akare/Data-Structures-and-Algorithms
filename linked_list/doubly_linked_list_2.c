#include "linked_list.h"

/**
 * print_dlist - prints a linked lists values
 * @head: Head of the dlistint_s list
 */

void print_dlist(dlistint_t *head)
{
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}

/**
 * free_dlist - frees up a linked list
 * @head: A dlistint_t list
 */

void free_dlist(dlistint_t **head)
{
	while ((*head)->next)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
}
