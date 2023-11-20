#include "main.h"

void print_char(char c) {
    putchar(c);
}

void print_chars(int num, ...) {
    va_list arg_list;
    va_start(arg_list, num);

    for (int i = 0; i < num; i++) {
        print_char(va_arg(arg_list, char));
    }
    va_end(arg_list);
}

/**
 * _printf - 
 */

int _printf(const char *format, ...);
{
	va_list lista;
	int i = 0;
	char *str;

	va_start(lista, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				
				case 'c':
					print_chars("%c", va_arg(lista, char));
					break;
				case 's':
					str = va_arg(lista, char *);
					if (!str)
						str = "(null)";
					print_chars("%s", str);
					break;
				case '%':
					print_chars("%s", va_arg(lista, char));
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}
	va_end(lista);
	return (0);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (diff);
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
	return (i);
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
