#include "main.h"
#include <stdarg.h>

/**
 * handle_delimiter - handle delimiter type.
 * @format: string format
 * @arguments_list: arguments list
 *
 * Return: length of the string.
*/

int handle_delimiter(const char *format, va_list arguments_list)
{
	int counter = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter += check_delimiter_type(*format, arguments_list);
		}
		else
		{
			_putchar(*format);
			counter++;
		}
		format++;
	}
	return (counter);
}
