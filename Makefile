##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile of my_printf
##

NAME		=	libmy.a

SRC			=	sources/my_printf.c				\
				sources/flags.c					\
				lib/my_strlen.c					\
				lib/my_putchar.c				\
				lib/my_putstr.c					\
				lib/my_put_nbr.c				\
				lib/my_putnbr_base.c			\
				lib/my_va_putchar.c				\
				lib/my_va_putstr.c				\
				lib/my_va_put_nbr.c				\
				lib/my_put_posnbr.c				\
				lib/my_va_hexa.c				\
				lib/my_va_binary.c				\
				lib/my_va_octal.c				\
				lib/my_va_percent.c				\
				lib/my_va_put_posnbr.c			\

OBJ			=	$(SRC:.c=.o)

VALGRIND	=	vgcore*

CFLAGS		=	-I./includes

LIB			=	ar rc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(LIB) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: 	clean
		rm -f $(NAME) $(VALGRIND)

re:		fclean all