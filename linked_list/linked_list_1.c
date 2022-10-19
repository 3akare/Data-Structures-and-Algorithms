#include "linked_list.h"

/**
 * add_node - Adds an new node to a listint_s list
 *
 * @head: Head of the listint_s list
 * @n: an integer
 * Return:  listint_t*
 */

listint_t *add_node(listint_t **head, int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
}

/**
 * print_list - prints a linked lists values
 * @head: Head of the listint_s list
 */

void print_list(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

/**
 * add_node_end - Adds an new node to a listint_s list at the end
 *
 * @head: Head of the listint_s list
 * @n: an integer
 * Return:  listint_t*
 */

listint_t *add_node_end(listint_t **head, int n)
{
	listint_t *tmp = *head;
	listint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	return (new);
}

/**
 * print_node_at_index - prints the node's value at @index
 * @head: Head of the listint_s list
 * @index: an integer
 * Return:  listint_t*
 */

listint_t *print_node_at_index(listint_t **head, int index)
{
	listint_t *len = *head;
	int num = 1;

	while (len)
	{
		if (num == index)
		{
			printf("%d\n", len->n);
			return (*head);
		}
		len = len->next;
		num++;
	}
	return (NULL);
}

/**
 * delete_node_at_index - deletes the node's value at @index
 * @head: Head of the listint_s list
 * @index: an integer
 * Return:  listint_t*
 */

listint_t *delete_node_at_index(listint_t **head, int index)
{
	listint_t *len = *head;
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
			return (*head);
		}
		len = len->next;
		num++;
	}
	return (NULL);
}

