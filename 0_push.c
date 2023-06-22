#include "monty.h"

/**
 * push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t **head, unsigned int counter)
{
	stack_t *top = malloc(sizeof(stack_t));
    if (top == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    top->n = value;
    top->prev = NULL;
    top->next = *head;

    if (*head != NULL)
        (*head)->prev = top;

    *head = top;
    return;
}
