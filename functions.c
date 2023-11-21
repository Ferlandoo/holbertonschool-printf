#include "main.h"

/**
 * printf_char - prints a character
 * @char_list: character to print
 * Return: 1
 */

int printf_char(va_list char_list)
{
	char c;

	c = va_arg(char_list, int);
	_putchar(c);
	return (1);
}

/**
 * printf_string - prints a string
 * @string_list: string to print
 * Return: length of string
 */

