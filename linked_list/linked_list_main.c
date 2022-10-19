#include "linked_list.h"

#define status singly

/**
 * main - Main entry point
 * Desc - Test for linked list function
 * Return: Always Successful
 */

int main(void)
{
    #if type == 0
	listint_t *head = {NULL};

	add_node(&head, 8);
	add_node_end(&head, 8);
	add_node(&head, 9);
	print_list(&head);
	print_node_at_index(&head, 2);
	delete_node_at_index(&head, 1);
	puts("");
	print_list(&head);
	pop_top_of_list(&head);
	puts("");
	print_list(&head);
	free_list(&head);
    #else
	printf("Hello");
    #endif

	return (0);
}
