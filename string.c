#include "main.h"

/**
 * string - Prints a string.
 *
 * @str: The string to print.
 *
 * Return: Number of characters printed.
 */

int string(char *str)
{
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		count += write(1, str, 1);
		str++;
	}
	return (count);
}

