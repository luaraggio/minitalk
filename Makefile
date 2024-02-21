NAME = 
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -I.
SRCS =        utils.c\
	      server.c\
	      client.c\

OBJS = $(SRCS:.c=.o)

RM = rm -rf

all:	$(NAME)

$(NAME)		$(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
