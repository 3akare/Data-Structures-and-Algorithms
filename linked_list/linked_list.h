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

#define type singly
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
 * @next: A pointer to the next node in a doubly linked list
 * @prev: A pointer to the prev node in a doubly linked list
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *next;
	struct dlistint_s *prev;
} dlistint_t;


/** Singly Linked List **/
listint_t *add_node(listint_t **head, int n);
listint_t *add_node_end(listint_t **head, int n);
void print_list(listint_t **head);
void free_list(listint_t **head);
listint_t *print_node_at_index(listint_t **head, int index);
listint_t *delete_node_at_index(listint_t **head, int index);
listint_t *pop_top_of_list(listint_t **head);


/** Doubly Linked List **/

dlistint_t *add_dnode(dlistint_t **head, int n);
void print_dlist(dlistint_t *head);
dlistint_t *add_dnode_end(dlistint_t **head, int n);
dlistint_t *print_dnode_at_index(dlistint_t *head, int index);
dlistint_t *delete_dnode_at_index(dlistint_t **head, int index);
void print_dlist_rev(dlistint_t *head);
void free_dlist(dlistint_t **head);


#endif /* _LINKED_LIST_*/
