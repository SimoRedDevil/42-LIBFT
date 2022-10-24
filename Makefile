# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 20:18:10 by mel-yous          #+#    #+#              #
#    Updated: 2022/10/24 18:59:38 by mel-yous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS := $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

all : $(NAME)

.o: .c libft.h
	$(CC) -Werror -Wextra -Wall -c $<  -o $@

$(NAME):	$(OBJS)
	ar cr $(NAME) $(OBJS)

clean:	
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)
re : fclean all
.PHONY : all fclean clean re