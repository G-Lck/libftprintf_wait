NAME = libftprintf.a
SRCS = ft_putstr.c \
	ft_putchar.c \
	parseur.c \
	ft_printf.c

OBJS = ${SRCS:.c=.o}
INCLUDE = libftprintf.h
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o $(<:.c=.o)

all : ${NAME}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}


clean:
	${RM} ${OBJS} 

fclean: clean
	${RM} ${NAME}

re: fclean all