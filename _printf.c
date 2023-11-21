#include "main.h"

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
    if (format != NULL)
    {
    while (format[i] != 0)
    {
            if (format[i] == '%')
            {
                    i++;
                    if (format[i] == '%')
                    {
                            _putchar('%');
                            len++;
                    }
                    else if (format[i] != 0)
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
                    else
                    {
                            _putchar(format[i]);
                            len++;
                    }
            }
            else
            {
                    _putchar(format[i]);
                    len++;
            }
            i++;
    }
    va_end(list);
    return (len);
}
return (-1);
}
