CC		:=	cc
HDR_DIR	:=	./hdr/
SRC_DIR	:=	./src/
OBJ_DIR	:=	./obj/
CFLAGS	:=	-Wall -Wextra -Werror
IFLAGS	:=	-I./hdr/ -I./libft/
src		:=	ftprintf ft_xtoa ft_utoa to_next_symbol ft_logb
OBJ		=	$(src:%=$(OBJ_DIR)%.o)
LIBFT	:=	./libft/libft.a
NAME	:=	libftprintf.a

.PHONY: clean fclean re all tmp

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJ)
	ld -r $(OBJ) $(LIBFT) -o $(OBJ_DIR)ft_printf.o
	ar -rc $@ $(OBJ_DIR)ft_printf.o

$(LIBFT):
	cd ./libft && make re

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(IFLAGS) -o $@ -c $<

clean:
	cd ./libft && make clean && cd ..
	rm -rf $(OBJ_DIR)

fclean: clean
	cd ./libft && make fclean && cd ..
	rm -f $(NAME)

re: fclean all
