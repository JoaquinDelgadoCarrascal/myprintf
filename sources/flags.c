/*
** EPITECH PROJECT, 2020
** flags printf
** File description:
** all the flags in printf
*/

#include <stddef.h>
#include "my.h"
#include "my_printf.h"

void printf_flags(t_flags *mkr_array)
{
    mkr_array[0].flag = 's';
    mkr_array[1].flag = 'd';
    mkr_array[2].flag = 'i';
    mkr_array[3].flag = 'c';
    mkr_array[4].flag = 'x';
    mkr_array[5].flag = 'X';
    mkr_array[6].flag = 'b';
    mkr_array[7].flag = '%';
    mkr_array[8].flag = 'o';
    mkr_array[9].flag = 'u';
}

void printf_functions(t_flags *mkr_array)
{
    mkr_array[0].fnc = &my_va_putstr;
    mkr_array[1].fnc = &my_va_put_nbr;
    mkr_array[2].fnc = &my_va_put_nbr;
    mkr_array[3].fnc = &my_va_putchar;
    mkr_array[4].fnc = &my_va_hexa;
    mkr_array[5].fnc = &my_va_hexa;
    mkr_array[6].fnc = &my_va_binary;
    mkr_array[7].fnc = &my_va_percent;
    mkr_array[8].fnc = &my_va_octal;
    mkr_array[9].fnc = &my_va_put_posnbr;
    mkr_array[10].fnc = NULL;
}