#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int numlen(int num);
int print_number(int n);
int handle_delimiter(const char *format, va_list arguments_list);
int check_delimiter_type(char delimiter, va_list arguments_list);

#endif /* MAIN_H */
