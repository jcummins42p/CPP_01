# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/09/04 12:54:58 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

SRC_DIR = .
OBJ_DIR = obj
CC = c++
CFLAGS = -g -Werror -Wextra -Wall -pedantic -std=c++98 -lstdc++

SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@
	@echo "✅ Linking object files into executable $@"

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c $(HEADS)
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "✅ Complied object file $@ from source file $<"

clean:
	@echo "💥 Removing all object files"
	@rm -rf $(OBJ_DIR)
	@rm *.replace

fclean: clean
	@echo "💥 Removing all object files and executable"
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
