#include "main. h"
/**
* printf_char - prints a char.
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
		str = pf_strlen(str);
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
