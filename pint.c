#include "monty.h"

/**
 * pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void pint(stack_t **head, unsigned int counter)
{
	stack_t *current;
	current = top;
	unsigned int count = 0;
	
	while (current != NULL && count < counter)
	{
		if (count == counter - 1)
		{
			printf("%d\n", current->n);
			return;
		}
		
		current = current->next;
		count++;
	}
	
	fprintf(stderr, "Error: can't pint, stack empty\n");
	exit(EXIT_FAILURE);
}
