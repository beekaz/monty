#include "monty.h"

/**
 * pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/

void pall(stack_t **head, unsigned int number)
{
	stack_t *current;
	current = top;
	unsigned int count = 0;
	
	while (current != NULL && count < number)
	
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
}
