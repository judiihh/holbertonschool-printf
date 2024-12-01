#include "main.h"

/**
 * specifier_cases - Handles the specifiers for the _printf function.
 *
 * @specifier: The character specifying the format type.
 * @args: Argument list.
 *
 * Return: Number of characters printed.
 */


int specifier_cases(char specifier, va_list args)
{
	char c;

	switch (specifier)
	{
		case 'c':
			c = va_arg(args, int);
			return (write(1, &c, 1));
		case 's':
			return (string(va_arg(args, char *)));
		case '%':
			return (write(1, "%", 1));
		case 'd':
		case 'i':
			return (integer(va_arg(args, int)));
		default:
			write(1, "%", 1);
			return (write(1, &specifier, 1));
	}
}
