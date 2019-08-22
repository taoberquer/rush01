CFILES		= main.c display.c tao.c check.c

OFILES		= ${CFILES:.c=.o}

GCC			= gcc

FLAGS		= -Wall -Werror -Wextra

RM			= rm -f

NAME		= rush01

.c.o:
			${GCC} ${FLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OFILES}
			${GCC} ${FLAGS} -o ${NAME} ${OFILES}

all:		${NAME}

clean:
			${RM} ${OFILES}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re