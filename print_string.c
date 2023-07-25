#include "main.h"

/**
 * print_string - Writes the string str to stdout
 * @str: string to print
 *
 * Return: length of the printed string.
*/

int print_string(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		print_string("(null)");
		return (0);
	}

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	return (len);
}
