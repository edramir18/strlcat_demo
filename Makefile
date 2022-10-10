NAME := demo

FLAGS := -Wall -Werror -Wextra

CC := gcc $(FLAGS)

SRCS := \
    ft_strlcat.c    \
	$(NAME).c

OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

%.o:%.c
	$(CC) -c $<

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

std:
	$(CC) -DSTD $(NAME).c -o $(NAME)

.PHONY: re clean fclean std

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)