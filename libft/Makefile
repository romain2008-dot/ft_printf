CC      = cc
NAME    = libft.a
SRC = $(wildcard *.c)
OBJ     = ${SRC:.c=.o}
CFLAGS  = -Wall -Werror -Wextra
COMPILE = $(CC) $(CFLAGS) -c
LIB     = ar rc $(NAME)
RANLIB  = ranlib $(NAME)
REMOVE  = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@$(LIB) $(OBJ)
	@$(RANLIB)

%.o: %.c
	@$(COMPILE) $< -o $@

clean:
	@$(REMOVE) $(OBJ)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re

