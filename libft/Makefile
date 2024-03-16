# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 21:06:26 by rhiguita          #+#    #+#              #
#    Updated: 2024/03/10 19:03:26 by rhiguita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

BONUS_NAME = .bonus

CC = gcc
AR = ar
CFLAGS = -Wall -Werror -Wextra
ARFLAGS = -rcs
REMOVE = rm -f

SRCS =	ft_calloc.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_tolower.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_memchr.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_toupper.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_putnbr_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_itoa.c \
		ft_split.c \
		ft_hexa.c \
		ft_uputnbr.c \
		ft_ptr.c \

OBJS = $(SRCS:.c=.o)

BONUS =	ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \

OBJS_BONUS = $(BONUS:.c=.o)

all:	$(NAME)

bonus: $(BONUS_NAME)
	
%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(REMOVE) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(REMOVE) $(NAME) $(BONUS_NAME)

re: fclean all

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(BONUS_NAME): $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_BONUS)
	$(AR) $(ARFLAGS) $(BONUS_NAME) $(OBJS) $(OBJS_BONUS)

.PHONY: clean fclean re all bonus
