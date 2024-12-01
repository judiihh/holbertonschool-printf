#include "main.h"

/**
 * _printf - Produces an output depending the format specifier.
 *
 * @format: The string that contains the specifiers and the characters.
 *
 * Return: The number of characters printed.
 *
 */

int _printf(const char *format, ...)
{

	va_list args;

	int i = 0, count = 0;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += specifier_cases(format[i], args);
		}

		else
		{
			count += write(1, &format[i], 1);
		}

		i++;
	}

	va_end(args);
	return (count);

}
