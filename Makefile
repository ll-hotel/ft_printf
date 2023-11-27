CC		:=	cc
HDR_DIR	:=	./
SRC_DIR	:=	./
OBJ_DIR	:=	./.obj/
CFLAGS	:=	-Wall -Wextra -Werror
IFLAGS	:=	-I$(HDR_DIR)
hdr		:=	fake_libft ft_printf ft_printf_utils handlers
HDR		= $(hdr:%=$(HDR_DIR)%.h)
src		:=	ftprintf ft_xtoa ft_utoa ft_logb ft_putstr_fd ft_putchar_fd ft_strlen ft_putnbr_fd ft_strncmp ft_calloc handlers
OBJ		=	$(src:%=$(OBJ_DIR)%.o)
NAME	:=	libftprintf.a

.PHONY: clean fclean re all tmp

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	ld -r $(OBJ) -o $(OBJ_DIR)ft_printf.o
	ar -rc $@ $(OBJ_DIR)ft_printf.o

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HDR)
	$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
