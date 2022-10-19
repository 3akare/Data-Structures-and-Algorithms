#include "linked_list.h"

/**
 * add_dnode - Adds an new node to a dlistint_s list
 *
 * @head: Head of the dlistint_s list
 * @n: an integer
 * Return:  listint_t*
 */

dlistint_t *add_dnode(dlistint_t **head, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}

/**
 * add_dnode_end - Adds an new node to a dlistint_s list at the end
 *
 * @head: Head of the dlistint_s list
 * @n: an integer
 * Return:  listint_t*
 */


dlistint_t *add_dnode_end(dlistint_t **head, int n)
{
	dlistint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	while ((tmp->next))
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;
	return (new);
}

/**
 * print_dnode_at_index - prints the node's value at @index
 * @head: Head of the dlistint_s list
 * @index: an integer
 * Return:  dlistint_t*
 */

dlistint_t *print_dnode_at_index(dlistint_t *head, int index)
{
	dlistint_t *tmp = head;
	int num = 1;

	while (tmp)
	{
		if (num == index)
		{
			printf("%d\n", tmp->n);
			return (head);
		}
		tmp = tmp->next;
		num++;
	}
	return (NULL);
}

/**
 * delete_dnode_at_index - deletes the node's value at @index
 * @head: Head of the dlistint_s list
 * @index: an integer
 * Return:  listint_t*
 */

dlistint_t *delete_dnode_at_index(dlistint_t **head, int index)
{
	dlistint_t *len = *head;
	int num = 1;

	if (index == 1)
	{
		*head = len->next;
		return (*head);
	}
	while (len->next)
	{
		if (num == (index - 1))
		{
			len->next = len->next->next;
			len->next->prev = len;
			return (*head);
		}
		len = len->next;
		num++;
	}
	return (NULL);
}

/**
 * print_dlist_rev - prints a linked lists values in reverse
 * @head: Head of the dlistint_s list
 */

void print_dlist_rev(dlistint_t *head)
{
	while (head->next)
		head = head->next;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->prev;
	}
}
