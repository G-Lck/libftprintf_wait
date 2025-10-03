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

# 🔹 Ajout : fichier(s) de test (par ex. main.c)
TEST_SRCS = main.c
TEST_OBJS = ${TEST_SRCS:.c=.o}
TEST_EXE = test   # 🔹 Nom de l'exécutable

.c.o :
	${CC} ${CFLAGS} -c $< -o $(<:.c=.o)

all : ${NAME} ${TEST_EXE}   # 🔹 Ajout de l'exécutable à la cible all

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

# 🔹 Nouvelle règle pour compiler l'exécutable test
${TEST_EXE}: ${NAME} ${TEST_OBJS}
	${CC} ${CFLAGS} -o ${TEST_EXE} ${TEST_OBJS} -L. -lftprintf

clean:
	${RM} ${OBJS} ${TEST_OBJS}   # 🔹 Ajout du nettoyage des objets de test

fclean: clean
	${RM} ${NAME} ${TEST_EXE}   # 🔹 Ajout du nettoyage de l'exécutable

re: fclean all
