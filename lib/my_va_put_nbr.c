/*
** EPITECH PROJECT, 2020
** my_va_put_nbr
** File description:
** int flag
*/

#include "my.h"

void my_va_put_nbr(va_list ap)
{
    int i = va_arg(ap, int);

    my_put_nbr(i);
}