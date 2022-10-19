#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * enum status - sets test for singly and  doubly list
 * @singly: a singly list
 * @doubly: a doubly list
 */

enum status
{
	singly, doubly
};

/**
 * struct listint_s - Structure of a singly linked list
 * @n: An integer
 * @next: A pointer to the next node in a singly linked list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * struct dlistint_s - Structure of a doubly linked list
 * @n: An integer
 * @next: A pointer to the next node in a singly linked list
 * @prev: A pointer to the prev node in a singly linked list
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;

listint_t *add_node(listint_t **head, int n);
listint_t *add_node_end(listint_t **head, int n);
void print_list(listint_t **head);
void free_list(listint_t **head);
listint_t *print_node_at_index(listint_t **head, int index);
listint_t *delete_node_at_index(listint_t **head, int index);
listint_t *pop_top_of_list(listint_t **head);


#endif /* _LINKED_LIST_*/
