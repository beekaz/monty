#include "monty.h"

/**
 * is_number - checks if a given string represents a valid number.
 * @number: argument_1, The string to be checked.
 * Return: return 1 if the string represents a number,
 * otherwise returns 0.
 */
int is_number(char *number)
{
	int index = 0;

	if (number == NULL)
		return (0);
	if (*number == '\0')
		return (0);

	if (*number == '-' || *number == '+')
	{
		index++;
		if (*number == '\0')
			return (0);
	}

	if (number[index] == '0')
		return (number[index + 1] == '\0');

	while (number[index] != '\0')
	{
		if (!digit(number[index]))
			return (0);
		index++;
	}
	return (1);
}





/**
 * digit - checks if a given character is a digit (0-9).
 * @number: argument_1, The character to be checked
 * Return: return  1 if the character is a digit, otherwise returns 0.
 */
int digit(char number)
{
	return (number >= '0' && number <= '9');
}
