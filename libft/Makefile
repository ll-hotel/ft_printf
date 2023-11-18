CC=cc
CFLAGS=-Wall -Wextra -Werror
names=atoi bzero calloc isalnum isalpha isascii isdigit isprint itoa memchr memcmp memcpy memmove memset putstr putchar_fd putendl_fd putnbr_fd putstr_fd split strchr strdup striteri strjoin strlcat strlcpy strlen strmapi strncmp strnstr strrchr strtrim substr tolower toupper
HDRDIR=./
OBJDIR=./
SRCDIR=./
OBJS=$(names:%=$(OBJDIR)ft_%.o)
bonu=add_back add_front clear delone iter last map new size
BONUS=$(bonu:%=$(OBJDIR)ft_lst%_bonus.o)
NAME=libft.a
.PHONY: clean fclean re

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)

bonus: $(OBJDIR) $(BONUS)

$(OBJDIR):
	mkdir $@

$(OBJDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $<
	ar -rc $(NAME) $@

clean:
	rm -f $(OBJS) $(BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all
