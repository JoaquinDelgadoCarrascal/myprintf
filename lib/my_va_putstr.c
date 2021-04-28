/*
** EPITECH PROJECT, 2020
** my_va_putstr
** File description:
** string flag
*/

#include "my.h"

void my_va_putstr(va_list ap)
{
    char *str = va_arg(ap, char *);

    my_putstr(str);
}