# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bede-car <bede-car@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 19:32:52 by bede-car          #+#    #+#              #
#    Updated: 2022/06/01 00:56:20 by bede-car         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ./srcs/ft_swap.c  srcs/ft_strlen.c  srcs/ft_strcmp.c  srcs/ft_putstr.c  srcs/ft_putchar.c

NAME	= libft.a

OBJS	= ft_swap.o  ft_strlen.o  ft_strcmp.o  ft_putstr.o  ft_putchar.o

CFLAG 	= -Wall -Werror -Wextra -I./includes

HEADER	= ./includes/ft.h

all : co
	ar -rc ${NAME} ${OBJS} ${HEADER}

co :
	gcc -c ${CFLAG} ${SRCS}

clean :
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re : fclean all

.PHONY:	all clean fclean re