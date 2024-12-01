#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * specifier_cases - Handles the specifiers for the _printf function.
 * @spec: The format specifier
 * @args: The list of arguments.
 *
 * Return: The number of characters printed.
 */
int specifier_cases(char spec, va_list args)
{
	int count = 0;
	char c, *s;

	if (spec == 'c')
	{
		c = (char)va_arg(args, int);
		count += write(1, &c, 1);
	}
	else if (spec == 's')
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(null)";
		while (*s)
			count += write(1, s++, 1);
	}
	else if (spec == '%')
	{
		count += write(1, "%", 1);
	}
	else
	{
		count += write(1, "%", 1);
		count += write(1, &spec, 1);
	}
	
	return (count);
}
