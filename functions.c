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
int printf_string(va_list string_list)
{
	char *str;
	int i;
	int len;

	str = va_arg(string_list, char*);
	if (str == NULL)
	{
	str = "(null)";
	}
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
	_putchar(str[i]);
	}
	return (len);
}
/**
* _strlen - length of characters on s
* @s: number of characters
* Return: length of characters
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
	i++;
	}
	return (i);
}
/**
* get_function - gets the function
* @c: character to check
* Return: function
*/
int (*get_function(char c))(va_list)
{
	int i = 0;
	print_data prints[] = {
	{"c", printf_char},
	{"s", printf_string},
	{NULL, NULL}
	};
	while (prints[i].type)
	{
	if (*prints[i].type == c)
		return (prints[i].print);
	i++;
	}
	return (NULL);
}

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i, j, len = 0;
	int (*f)(va_list);

	va_start(list, format);
	i = 0;
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 0)
			{
				return (-1);
			}
			if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
			else
			{
				f = get_function(format[i]);
				if (f == NULL)
				{
					_putchar('%');
					_putchar(format[i]);
					len += 2;
				}
				else
				{
					j = f(list);
					len += j;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	if (format == NULL)
	{
		_putchar(N);
		_putchar(U);
		_putchar(L);
		_putchar(L);
	}
	va_end(list);
	return (len);
}
