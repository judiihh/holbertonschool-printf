#include "main.h"

/**
 * integer - Prints an integer.
 *
 * @n: The integer to print.
 *
 * Return: Number of characters printed.
 */
int integer(int n)
{
	unsigned int num = (n < 0) ? -n : n;
	char buffer[10];
	int i = 0, count = 0;

	if (n < 0)
		count += write(1, "-", 1);

	do {
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	while (i--)
		count += write(1, &buffer[i], 1);

	return (count);
}

