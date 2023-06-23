#include "monty.h"

/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int counter)
{
	if (top == NULL)
	{
		top = *stack;
		return;
	}
	else
	{
		(*stack)->next = top;
		top->prev = *stack;
		top = *stack;
		return;
	}
}
