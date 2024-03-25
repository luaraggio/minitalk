# Compilation:
COMPILER = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SERVER_NAME	=	server

CLIENT_NAME	=	client

NAME		=	server

# Libraries:
LIBFT		=	cd libft && make
PRINTF		= 	cd printf && make

# Sources and Objects:
SERVER_SRC	=	$(SERVER)

CLIENT_SRC	=	$(CLIENT)

SERVER_OBJS	=	$(SERVER_SRC:.c=.o)

CLIENT_OBJS	=	$(CLIENT_SRC:.c=.o)

OBJS		=	$(CLIENT_OBJS) \
					$(SERVER_OBJS)

# Rules:
all: $(NAME)

RM = rm -rf

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
