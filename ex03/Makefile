# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dzivanov <dzivanov@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 09:28:04 by dzivanov          #+#    #+#              #
#    Updated: 2022/03/23 19:03:20 by dzivanov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= diamondtrap

SRC= main.cpp ClapTrap.cpp ClapTrap.hpp ScavTrap.cpp ScavTrap.hpp FragTrap.cpp FragTrap.hpp DiamondTrap.cpp DiamondTrap.hpp

CC=c++

CFLAGS= -Wall -Werror -Wshadow -Wextra -std=c++98 -o

all: $(NAME)

$(NAME):
	$(CC) $(SRC) $(CFLAGS) $(NAME)

clean:
	@rm -f ./*.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re