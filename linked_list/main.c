#include "linked_list.h"

#define status singly

/**
 * main - Main entry point
 * Desc - Test for linked list function
 * Return: Always Successful
 */

int main(void)
{
	dlistint_t *head = {NULL};

	add_dnode(&head, 8);
	add_dnode(&head, 4);
	add_dnode(&head, 3);
	add_dnode(&head, 2);
	print_dlist(head);
	puts("");
	print_dnode_at_index(head, 2);
	delete_dnode_at_index(&head, 2);
	puts("");
	print_dlist(head);
	puts("");
	print_dlist_rev(head);
	puts("");
	print_dlist(head);
	free_dlist(&head);

	return (0);
}
