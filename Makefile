# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 11:34:38 by cwenz             #+#    #+#              #
#    Updated: 2023/03/20 15:52:59 by cwenz            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memset.c \
		ft_bzero.c \
		ft_strlcpy.c \
		ft_memcpy.c \
		ft_strlcat.c \
		ft_memmove.c
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
$(OBJ): $(SRC)
	$(CC) -c $(CFLAGS) $(SRC)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f
re: fclean all
.PHONY: clean
