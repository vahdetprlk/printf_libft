NAME	= libftprintf.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror

FILES	= $(shell find . -type f ! -name "ft_*_bonus.c" -name "ft_*.c")
OBJ		= $(FILES:%.c=%.o)

BSRC	= $(shell find . -type f -name "ft_*_bonus.c")
B_OBJ	= $(BSRC:%.c=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ar -rc $(NAME) $(OBJ)

bonus: all $(B_OBJ)
	@ar -rc $(NAME) $(OBJ) $(B_OBJ)

clean:
	@rm -f $(OBJ) $(B_OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
