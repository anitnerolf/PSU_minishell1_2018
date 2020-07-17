##
## EPITECH PROJECT, 2019
## PSU_minishell1_2018
## File description:
## Makefile
##

SRC	=	main.c		\
		my_putchar.c	\
		my_putstr.c	\
		my_strlen.c	\
		first_file.c	\
		second_file.c	\
		third_file.c	\
		main_function.c	\
		clean_str.c	\
		double_struct.c	\
		my_strcat.c	\
		is_num.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g -g3 -ggdb -I ./include

NAME	=	mysh

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all
