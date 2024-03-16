# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhiguita <rhiguita@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/29 00:53:11 by rhiguita          #+#    #+#              #
#    Updated: 2024/03/14 23:40:44 by rhiguita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = libft/libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
REMOVE = rm -f
ARFLAGS = -rcs
AR = ar

SRCS =	ft_printf.c
	
OBJS = $(SRCS:.c=.o)

all: libft $(NAME) 

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(LIBFT):
	@$(MAKE) -C libft


%.o: %.c
	$(CC) -c  $< -o $@ 

clean:
	$(REMOVE) $(OBJS)
	@$(MAKE)  clean -C libft

fclean: clean
	$(REMOVE) $(NAME)
	@$(MAKE)  fclean -C libft

re: fclean all

.PHONY: all clean fclean re
