#include "main.h"

/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list list;
	int i, j, len = 0;
	int (*f)(va_list);

	va_start(list, format);
	i = 0;
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == '\0')
				{
					return (-1);
				}
				if (format[i] == '%')
				{
					putchar('%');
					len++;
				}
				else
				{
					f = get_function(format[i]);
					if (f == NULL)
					{
						putchar('%');
						putchar(format[i]);
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
				putchar(format[i]);
				len++;
			}
			i++;
		}
		va_end(list);
		return (len);
	}
	return (-1);
}
