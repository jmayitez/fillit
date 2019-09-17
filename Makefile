# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jasomayi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/10 17:48:12 by jasomayi          #+#    #+#              #
#    Updated: 2019/09/12 21:07:52 by jasomayi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= fillit

SRC		= ft_algo.c \
		  ft_verif.c \
		  ft_tools.c \
		  main.c

OBJ		= $(SRC:.c=.o)

INCLUDE	= fillit.h\
		  libft/libft.h

$(NAME): $(OBJ)
	make -C libft
	gcc -Wall -Werror -Wextra -g $(OBJ) -L libft/ -lft -o $(NAME)

clean:
	rm -rf $(OBJ)
	make clean -C libft

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

all: $(NAME)

.PHONY: clean fclean re all
