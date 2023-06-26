#include "monty.h"
#include <stdbool.h>

/**
 * is_numeric - check if a string represents a numeric value
 * @str: string to check
 * Return: true if the string is numeric, false otherwise
 */

bool is_numeric(const char *str)
{
	int i = 0;

	if (str == NULL || *str == '\0')
	{
		return false;
	}

	if (str[0] == '-' || str[0] == '+')
	{
		i = 1;
	}

	for (; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return false;
		}
	}

	return true;
}
