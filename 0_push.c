#include "monty.h"

/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int counter)
{
	 stack_t *new_node;
	 new_node = malloc(sizeof(stack_t));
	 if (new_node == NULL)
		 {
			 fprintf(stderr, "Error: Failed to allocate memory\n");
			 exit(EXIT_FAILURE);
		 }
	 new_node->n = counter;
	 new_node->next = *head;
	 new_node->prev = NULL;
	 if (*head != NUL)
	 {
		 (*head)->prev = new_node;
	 *head = new_node;
	 }
}
