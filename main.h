#ifndef MAIN_H
#define MAIN_H

typedef struct funk
{
	char *funk;
	int (*f)(int a, int b);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _strcmp(char *s1, char *s2)
int printf_char (va_list val)
int _strlen(char *s);
int printf_string (va_list val)
int print_perc (void);

#endif
