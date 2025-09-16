CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC=main.c tchell.c
OBJ=$(SRC:.c=.o)

NAME=../build/tchell

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
