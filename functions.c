#include "main. h"

/**
 * _printf - 
 */

int _printf(const char *format, ...);
{
	va_list lista;


	if (c)
	{
		print_char;
	}
	if else (s)
	{
		print_string;
	
	}
	else (%)
	{
		print_perc;
	}
	return (0);
}

/**
* printf_char - prints a char
* @val: arguments.
* Return: 1
*/

int printf_char (va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
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
	return (1);
}

/**
* printf_string - prints a string
* @val: arguments.
* Return: 1
*/

int printf_string (va_list val)
{
        char *str;
        int i;
        int len;

        str = va_arg(val, char*);
        if (str == NULL)
        {i
                str = "(null)";
                str = _strlen(str);
                for (i = 0; i < len; i++)
                {
                        _putchar(str[i]);
                }
                return (len);
        }
        else
                for (i = 0; i < len; i++)
                {
                        _putchar(str[i]);
                }
                return (len);
        _putchar(str);
        return (1);
}

/**
 * print_perc - print percentage
 * Return: 1
 */

int print_perc (void)
{
	_putchar(37);
	return (1);
}
