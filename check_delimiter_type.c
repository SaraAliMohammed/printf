#include "main.h"
#include <stdarg.h>
/**
 * check_delimiter_type - check delimiter type.
 * @delimiter: char that represent the delimiter
 * @arguments_list: arguments list
 * Return: length of the argument.
*/
int check_delimiter_type(char delimiter, va_list arguments_list)
{
	int count = 0, number;
	char c, *str;

	if (delimiter == 's')
	{
		str = va_arg(arguments_list, char *);
		count += print_string(str);
	}
	else if (delimiter == 'c')
	{
		c = va_arg(arguments_list, int);
		count += _putchar(c);
	}
	else if (delimiter == '%')
		count += _putchar('%');
	else if (delimiter == 'd' || delimiter == 'i')
	{
		number = va_arg(arguments_list, int);
		if (number < 0)
			count++;
		count += numlen(number);
		print_number(number);
	}
	else
	{
		count += _putchar('%');
		if (delimiter)
			count += _putchar(delimiter);
	}
	return (count);
}

