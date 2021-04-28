/*
** EPITECH PROJECT, 2020
** my_va_hexa.c
** File description:
** hexadecimal flag
*/

#include "my.h"

void my_va_hexa(va_list ap)
{
    int i = va_arg(ap, int);

    my_putnbr_base(i, "16");
}