
SCRS	= ft_putstr.c ft_display.c main.c ft_putchar.c ft_error.c

HEADER = ft_display_file.h

NAME	= ft_display_file

CFLAG	= -Wall -Werror -Wextra

OBJS	= ${SCRS:.c=.o}

COMP	= gcc

.c.o :
	${COMP} ${CFLAG} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS} 
	${COMP} -o ${NAME} ${OBJS} ${HEADER}

all : ${NAME}

clean : 
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}
