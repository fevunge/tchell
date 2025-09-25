CC=cc
CFLAGS=-Wall -Wextra -Werror

SRC=main.c tchell.c
OBJ=$(SRC:.c=.o)
LIBGNL=libgnl.a

NAME=../build/tchell

all: $(NAME)

$(NAME): $(OBJ) $(LIBGNL)
	mkdir ../build -p
	$(CC) $(CFLAGS) -o $@ $^

$(LIBGNL):
	$(MAKE) -C get_next_line/

clean:
	rm -f $(LIBGNL)
	make clean -C get_next_line/
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
