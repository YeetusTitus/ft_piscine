
SRCS =	ft_error.c ft_files.c ft_putstr.c ft_strlen.c ft_strcat.c main.c

DIRECTORYS = srcs/

SRCSD =	$(addprefix ${DIRECTORYS}, $(SRCS))

OBJS =	${SRCSD:.c=.o}

OBJSD = $(addprefix ${DIRECTORYS}, ${OBJS})

EFLAGS = -Wall -Wextra -Werror

HEADER = includes/ft_header.h

OFLAGS = -c

NAME =  ft_display_file

.c.o: gcc ${OFLAGS} ${EFLAGS} $< ${HEADER}  -o ${<:.c=.o} 

.move: mv ${OBJS} ${OBJSD}

${NAME}: ${OBJS}
		 gcc ${EFLAGS} -o ${NAME} ${OBJS} 
			
all:	${NAME}

clean:
		rm  -f ${OBJS}

fclean:	clean
		rm  -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re