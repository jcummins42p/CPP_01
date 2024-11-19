# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/11/19 16:27:51 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC_DIR = .
OBJ_DIR = obj
CC = c++
CFLAGS = -g -Werror -Wextra -Wall -pedantic -std=c++98 -lstdc++

SRCS = Harl.cpp main.cpp
OBJS = $(SRCS:%.cpp=%.o)
HEADS = Harl.hpp

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "✅ Linking object files into executable $@"

%.o: %.cpp $(HEADS)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "✅ Complied object file $@ from source file $<"

clean:
	@echo "💥 Removing all object files"
	@rm -f $(OBJS)

fclean: clean
	@echo "💥 Removing all object files and executable"
	@rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
