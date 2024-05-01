NAME = libftprintf.a
CC = cc
LIBFTNAME = libft.a
LIBFTDIR = ./Libft
FLAGS = -Wall -Wextra -Werror
AR = ar

SRCS = ft_putchar.c ft_putint.c ft_putstr.c ft_putpercent.c ft_puthexupcase.c \
		ft_putpointer.c ft_putunsint.c ft_puthexlowcase.c ft_printf.c \

OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

makelibft:
		make -C $(LIBFTDIR)
		cp $(LIBFTDIR)/$(LIBFTNAME) .
		mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJ)
		$(AR) -r $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
