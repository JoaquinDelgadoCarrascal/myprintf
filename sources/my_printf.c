/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** copy of printf function
*/

#include <stdlib.h>
#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

t_flags *fill_arrays(void)
{
    t_flags *mkr_array = malloc(sizeof(t_flags) * 12);

    if (mkr_array == NULL)
        return (NULL);
    printf_flags(mkr_array);
    printf_functions(mkr_array);

    return (mkr_array);
}

void function_flags(va_list ap, char n, t_flags *mkr_array)
{
    int i = 0;

    while (mkr_array[i].fnc != NULL) {
        if (n == mkr_array[i].flag)
            mkr_array[i].fnc(ap);
        i++;
    }
}

void my_printf(char *str, ...)
{
    int i = 0;
    va_list ap;
    t_flags *mkr_array = fill_arrays();

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            function_flags(ap, str[i], mkr_array);
        }
        else
            my_putchar(str[i]);
        i++;
    }
    free(mkr_array);
    va_end(ap);
}