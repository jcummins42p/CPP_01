# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcummins <jcummins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 18:08:59 by jcummins          #+#    #+#              #
#    Updated: 2024/08/29 14:29:42 by jcummins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

SRC_DIR = .
OBJ_DIR = obj
CXX = c++
CXXFLAGS = -g -Werror -Wextra -Wall -pedantic -std=c++98

SRCS = $(shell find $(SRC_DIR) -name '*.cpp')
HEADS = $(shell find $(HEAD_DIR) -name '*.hpp')
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@echo "✅ Linking object files into executable $@"

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c $(HEADS)
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "✅ Complied object file $@ from source file $<"

clean:
	@echo "💥 Removing all object files"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "💥 Removing all object files and executable"
	@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
