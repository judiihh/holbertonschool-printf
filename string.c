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
	int len = 0;

	if (!str)
	{
		str = "(null)";
	}

	while (str[len])
	{
		write(1, &str[len++], 1);
	}

	return (len);
}

