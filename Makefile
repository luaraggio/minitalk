NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT =	libft/libft.a
CLIENT = client
SERVER = server
CLIENT_SRC = client.c
SERVER_SRC = server.c

all: $(LIBFT)
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SERVER_SRC) $(NAME) -o $(SERVER)
	$(CC) $(CFLAGS) $(CLIENT_SRC) $(NAME) -o $(CLIENT)

$(LIBFT): 
	make -C libft

RM = rm -rf

clean:
	make clean -C libft

fclean: clean
	make fclean -C libft
	$(RM) $(SERVER) $(CLIENT)

re:	fclean all

norm:
	norminette -R CheckForbiddenSourceHeader

.PHONY: all clean fclean re
