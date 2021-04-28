/*
** EPITECH PROJECT, 2020
** bsprintf.h
** File description:
** prototypes bsprintf
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include <unistd.h>
#include <stdarg.h>


typedef struct s_flags {
    void (*fnc) (va_list);
    char flag;
} t_flags;

void my_printf(char *s, ...);
void printf_flags(t_flags *mkr_array);
void printf_functions(t_flags *mkr_array);

#endif