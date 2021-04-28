/*
** EPITECH PROJECT, 2020
** my_va_octal
** File description:
** octal flag
*/

#include "my.h"

void my_va_octal(va_list ap)
{
    int i = va_arg(ap, int);

    my_putnbr_base(i, "8");
}