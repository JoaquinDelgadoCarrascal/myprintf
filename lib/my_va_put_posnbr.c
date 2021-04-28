/*
** EPITECH PROJECT, 2020
** my_va_put_posnbr
** File description:
** int flag
*/

#include "my.h"
#include "my_printf.h"

void my_va_put_posnbr(va_list ap)
{
    unsigned int i = va_arg(ap, unsigned int);

    my_put_posnbr(i);
}