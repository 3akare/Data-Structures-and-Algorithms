#include "linked_list.h"

/**
 * pop_top_of_list - deletes the node's value at the top of the list
 * @head: Head of the listint_s list
 * Return:  listint_t*
 */

listint_t *pop_top_of_list(listint_t **head)
{
	delete_node_at_index(head, 1);
}

/**
 * free_list - frees up a linked list
 * @head: A listint_t list
 */

void free_list(listint_t **head)
{
	while ((*head)->next)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
}
