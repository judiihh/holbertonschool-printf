#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * print_char - Handles printing a single character.
 * @args: The list of arguments.
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	return (write(1, &c, 1));
}

/**
 * print_string - Handles printing a string.
 * @args: The list of arguments.
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (!s)
		s = "(null)";
	while (*s)
		count += write(1, s++, 1);
	return (count);
}

/**
 * _printf - Produces output according to a format.
 * @format: A char string containing the format directives.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format)
		return (-1); /* Return -1 for NULL format */
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format) /* Ensure format doesn't end abruptly after '%' */
			{
				va_end(args);
				return (-1); /* Return -1 for incomplete specifier */
			}
			if (*format == 'c')
				count += print_char(args);
			else if (*format == 's')
				count += print_string(args);
			else if (*format == '%')
				count += write(1, "%", 1);
			else
			{
				/* Print unknown specifier as "%<char>" */
				count += write(1, "%", 1) + write(1, format, 1);
			}
		}
		else
		{
			/* Print regular characters */
			count += write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (count);
}

