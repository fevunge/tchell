SRCS = get_next_line.c get_next_line_utils.c
OBJS = $(SRCS:.c=.o)

all: $(OBJS)
	ar rcs ../libgnl.a $(OBJS)

clean:
	rm -rf $(OBJS)
