/*
** EPITECH PROJECT, 2020
** prototypes.h
** File description:
** prototypes printf
*/

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>

void my_putchar(char c);
int my_put_nbr(int nb);
int my_put_posnbr(unsigned int nb);

int my_putnbr_base(int nbr, char const *base);

int my_strlen(char const *str);
int my_getnbr(char const *str);

int my_putstr(char const *str);

void my_va_putstr(va_list ap);
void my_va_putchar(va_list ap);
void my_va_put_nbr(va_list ap);
void my_va_hexa(va_list ap);
void my_va_binary(va_list ap);
void my_va_octal(va_list ap);
void my_va_percent(va_list ap);
void my_va_put_posnbr(va_list ap);

#endif