CC      = cc
CFLAGS  = -Wall -Wextra -Werror
NAME    = libftprintf.a
SRC     = ft_printf.c ft_putchar.c  ft_puthex.c  ft_putnbr.c \
          ft_putnbr_u.c  ft_putptr.c  ft_putstr.c
OBJ     = $(SRC:.c=.o)
LIBFT_DIR = libft
LIBFT     = $(LIBFT_DIR)/libft.a
RM      = rm -f

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@ar rcs $(NAME) $(LIBFT)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re
