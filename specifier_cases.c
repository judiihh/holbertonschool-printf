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
	switch (specifier)
	{
		case 'c':
			{
				char c = va_arg(args, int);

				return (write(1, &c, 1));
			}
		case 's':
			return (string(va_arg(args, char *)));
		case '%':
			return (write(1, "%", 1));

		default:
			{
				char invalid[2];
				invalid[0] = '%';
				invalid[1] = specifier;
				write(1, invalid, 2);
				return (write(1, invalid, 2));
			}
	}
}

