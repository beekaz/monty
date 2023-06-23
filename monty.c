#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - monty code entry point
 *
 * Return: 0
 */


int main(void)
{
    char *opcode;
    int value, line_number = 1;
    size_t bufsize = 0;
    char *line = NULL;
    ssize_t linelen;

    while ((linelen = getline(&line, &bufsize, stdin)) != -1)
    {
        opcode = strtok(line, " \n\t\r");
        if (opcode == NULL || *opcode == '#')
        {
            line_number++;
            continue;
        }

        if (strcmp(opcode, "push") == 0)
        {
            char *arg = strtok(NULL, " \n\t\r");
            if (arg == NULL)
            {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
            }

            value = atoi(arg);
	    push(&stack, value);
        }
        else if (strcmp(opcode, "pall") == 0)
        {
		pall(&stack);
        }
        else if (strcmp(opcode, "pint") == 0)
        {
		pint(&stack, line_number);
        }
        else
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }

        line_number++;
    }

    free(line);
    return 0;
}
