#include "main.h"
#include <stdarg.h>

/**
 * _printf -  produces output according to a format.
 * @format: character string.
 *
 * Return: the number of characters printed.
*/

int _printf(const char *format, ...)
{
	int counter = 0;
	va_list arguments_list;

	va_start(arguments_list, format);
	if (!format || !format[counter])
		return (-1);
	counter = handle_delimiter(format, arguments_list);
	va_end(arguments_list);
	return (counter);
}
