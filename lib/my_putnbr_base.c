/*
** EPITECH PROJECT, 2020
** my_putnbr_base
** File description:
** Print number in base
*/

#include "my.h"

void change_to_base(int nbr, int base)
{
    int module = 0;
    char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (nbr > base - 1)
        change_to_base(nbr / base, base);
    module = nbr % base;
    if (module > 9)
        my_putchar(array[module % base - 10]);
    else
        my_putchar(module + 48);
}

int find_base(char const *str)
{
    int n = 0;
    int i = 0;

    while (str[i]) {
        if (str[i] < 48 || str[i] > 57)
            return (0);
        i++;
    }
    if (i == 1) {
        n += str[0] - 48;
    } else if (i == 2) {
        n = (n + str[0] - 48) * 10;
        n += str[1] - 48;
    } else
        return (0);
    return (n);
}

int my_putnbr_base(int nbr, char const *base)
{
    int intbase = find_base(base);

    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (intbase < 2 || intbase > 36)
        return (nbr);
    change_to_base(nbr, intbase);

    return (nbr);
}