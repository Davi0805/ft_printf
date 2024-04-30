NAME = libftprintf.a
CC = gcc
INCLUDE = libftprintf.h
FLAGS = -Wall -Wextra -Werror
AR = ar rc

SRCS = ft_putchar.c ft_putint.c ft_putstr.c ft_putpercent.c ft_puthexupcase.c \
		ft_putpointer.c ft_putunsint.c ft_puthexlowcase.c ft_printf.c

OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC)  $(FLAGS) -c $(SRCS)
	$(AR)  $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
