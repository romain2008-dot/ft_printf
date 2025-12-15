CC      = cc
CFLAGS  = -Wall -Wextra -Werror
NAME    = libftprintf.a

SRC     = ft_printf.c ft_putchar.c ft_puthex.c ft_putnbr.c \
          ft_putnbr_u.c ft_putptr.c ft_putstr.c
OBJ     = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT     = $(LIBFT_DIR)/libft.a

RM      = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJ)

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
