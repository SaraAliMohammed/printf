#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: a character string.
 *
 * Return: the number of characters printed (excluding the null byte used to
 *         end output to strings)
 */
int _printf(const char *format, ...) {
	va_list args;
	va_start(args, format);
	int count = 0;

	while (*format != '\0') {
		if (*format == '%') {
			format++;
			switch (*format) {
				case 'c': {
					char c = va_arg(args, int);
					putchar(c);
					count++;
					break;
				}
				case 's': {
					char *s = va_arg(args, char *);
					fputs(s, stdout);
					count += strlen(s);
					break;
				}
				case '%': {
					putchar('%');
					count++;
					break;
				}
				default: {
					putchar('%');
					putchar(*format);
					count += 2;
					break;
				}
			}
		} else {
			putchar(*format);
			count++;
		}
		format++;
	}

	va_end(args);
	return count;
}
