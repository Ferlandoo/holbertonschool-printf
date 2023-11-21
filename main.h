#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
/**
 * struct print_data - structure for printing data types
 * @type: type of data
 * @print: function to print data
 */
typedef struct print_data
{
	char *type;
	int (*print)(va_list list);
} print_data;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list char_list);
int printf_string(va_list string_list);
int _strlen(char *s);
int (*get_function(char c))(va_list);
#endif
