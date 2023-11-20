#ifndef MAIN_H
#define MAIN_H

conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_perc},
		{NULL, NULL}
}
va_list arg_list;
	if (format == NULL)
		return (-1);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char (va_list val)
int _strlen(char *s);
int printf_string (va_list val)
int print_perc (void);

#endif
