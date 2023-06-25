#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/

void execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	char *opcode;
    int value;

    opcode = strtok(content, " \t\n");
    if (opcode == NULL || opcode[0] == '#')
        return;

    if (strcmp(opcode, "push") == 0)
    {
        char *arg = strtok(NULL, " \t\n");
        if (arg == NULL)
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(file);
            free_stack(*stack);
            exit(EXIT_FAILURE);
        }
        if (!is_numeric(arg))
        {
            fprintf(stderr, "L%d: usage: push integer\n", counter);
            fclose(file);
            free_stack(*stack);
            exit(EXIT_FAILURE);
        }
        value = atoi(arg);
        push(stack, value);
    }
    else if (strcmp(opcode, "pall") == 0)
    {
	    /*stack_t **head = NULL;*/

	    pall(stack, counter);
    }
    else
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
        fclose(file);
        free_stack(*stack);
        exit(EXIT_FAILURE);
    }
}
