NAME = pipex

SRCS = 	pipex.c\
		utils.c\
		ft_strjoin.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putstr_fd.c\
		ft_split.c\
		ft_strcmp.c\
		ft_substr.c\
		ft_calloc.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_bzero.c\

OBJS = ${SRCS:.c=.o}

CC              = gcc
RM              = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
				${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
				ar rcs ${NAME} ${OBJS}

all:    ${NAME}

clean:
				${RM} ${OBJS} ${OBJSBONUS}

fclean: clean
				${RM} ${NAME}

re:             fclean all