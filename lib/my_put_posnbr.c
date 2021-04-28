/*
** EPITECH PROJECT, 2020
** my_put_posnbr
** File description:
** displays the number given as a parameter
*/

#include "my.h"

int my_put_posnbr(unsigned int nb)
{
    unsigned int d = 0;

    if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
    }
    if (nb >= 10) {
        d = (nb % 10);
        nb = (nb - d) / 10;
        my_put_nbr(nb);
        my_putchar(48 + d);
    } else {
        my_putchar(48 + nb % 10);
    }
    return (nb);
}