/*
** EPITECH PROJECT, 2020
** my_va_putchar
** File description:
** char flag
*/

#include "my.h"

void my_va_putchar(va_list ap)
{
    char c = va_arg(ap, int);

    my_putchar(c);
}