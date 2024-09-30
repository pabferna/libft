# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/21 13:00:34 by marvin            #+#    #+#              #
#    Updated: 2024/02/21 13:00:34 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

INCLUDE = libft.h
SRC	=	ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memset.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strlen.c \
		ft_strnstr.c \
		ft_strchr.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_subtr.c \
		ft_strtrim.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_split.c


OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		@ar rcs $(NAME) $(OBJ)

%.0: %.c
	$(CC) $(CFLAGS) -I. -c -o $@ $<

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
