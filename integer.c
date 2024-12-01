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
	unsigned int num;
	char digit;
	int count = 0;

	if (n < 0)
	{
		count += write(1, "-", 1);
		num = -n;
	}

	else
	{
		num = n;
	}

	if (num / 10)
	{
		count += integer(num / 10);
	}
	digit = (num % 10) + '0';
	count += write(1, &digit, 1);
	return (count);
}

