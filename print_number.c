#include "main.h"

/**
 * print_number - Writes the number n to stdout
 * @n: number to print
 *
 * Return: 0 on Success.
*/

int print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n < 10)
	{
		_putchar(n + '0');
	}
	return (0);
}
