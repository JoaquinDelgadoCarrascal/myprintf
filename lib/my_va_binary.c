/*
** EPITECH PROJECT, 2020
** my_va_binary
** File description:
** binary flag
*/

#include "my.h"

void my_va_binary(va_list ap)
{
    int i = va_arg(ap, int);

    my_putnbr_base(i, "2");
}