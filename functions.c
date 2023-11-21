#include "main.h"

/**
 * printf_char - Function that prints a char
 * @char_list: First operand a va list
 * Return: Returns an int or 0
 */

int printf_char(va_list char_list)
{
	char c;

	c = va_arg(char_list, int);
	_putchar(c);

	return (1);
}

/**
 * printf_string - Function that printg string
 * @string_list: First operand a va list
 * Return: Returns an int or 0
 */

int printf_string(va_list string_list)
{
	char *s;
	int i;

	s = va_arg(string_list, char*);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
