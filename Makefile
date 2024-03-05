# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 00:53:11 by rhiguita          #+#    #+#              #
#    Updated: 2024/03/03 17:50:41 by rhiguita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
REMOVE = rm -f
ARFLAGS = -rcs
AR = ar

SRCS = ft_printf.c/ 

OBJS = $(SRCS:.c=.c)

$(NAME) = $(OBJS)
	$(AR) $(ARFLGS) $(NAME) $(OBJS)

all = $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(REMOVE) $(OBJS)

fclean = clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
