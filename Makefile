# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: znichola <znichola@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/27 14:55:46 by znichola          #+#    #+#              #
#    Updated: 2022/11/27 14:55:46 by znichola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = screenspace

OBJ = main.o

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $(CFLAGS) $(OBJ) -I.