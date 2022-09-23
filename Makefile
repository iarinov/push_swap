# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aiarinov <aiarinov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 14:03:48 by aiarinov          #+#    #+#              #
#    Updated: 2022/07/13 14:34:06 by aiarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
NAME = push_swap
SRC = list_method.c checker_functions.c sort_stack.c instructions.c get_numbers.c main.c \
	del_list_elem.c sort_small_stack.c checker.c pre_sorting.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft
	make -C ./libftprintf
	gcc $(OBJ) ./libft/libft.a ./libftprintf/libftprintf.a -o $(NAME) $(FLAGS)

clean:
	make clean -C ./libft/
	make clean -C ./libftprintf/
	rm -f $(OBJ)

fclean: clean
	make fclean -C ./libft/
	make fclean -C ./libftprintf/
	rm -f $(NAME)

re: fclean all

