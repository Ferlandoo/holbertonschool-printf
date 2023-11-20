#include "main.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
        print_t funk[] = {
                {"c", print_char},
                {"s", print_string},
                {"%", print_perc},
                {NULL, NULL}
        };
        int i;

        i = 0;

        while (ops[i].funk != NULL)
                {
                        if (_strcmp(ops[i].funk, s) == 0)
                                return (ops[i].f);
                        i++;
                }
        return (NULL);
}
