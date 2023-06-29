# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwagner <mwagner@student.42wolfsburg.de>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/20 13:58:26 by mwagner           #+#    #+#              #
#    Updated: 2023/06/27 21:41:33 by mwagner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

VAL 		:= valgrind -s --leak-check=full --show-leak-kinds=all
RUN 		:= ./FragTraps

GREEN 		:= \033[0;32m
RED 		:= \033[0;31m
RESET_COL 	:= \033[0m

NAME 		:= FragTraps
CC 			:= c++
CFLAGS 		:= -Wall -Werror -Wextra -std=c++98
SRC 		:=	main.cpp 		\
				ClapTrap.cpp 	\
				ScavTrap.cpp 	\
				FragTrap.cpp

all: $(NAME)

$(NAME): $(SRC)
	@echo "$(RED)Compiling $(NAME)...$(RESET_COL)"
	$(CC) $(CFLAGS) $^ -o $@
	@echo "$(GREEN) $(NAME)!$(RESET_COL)"

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

val:
	$(VAL) $(RUN)

.PHONY: all clean fclean re
