# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytalai <ytalai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 01:21:16 by ytalai            #+#    #+#              #
#    Updated: 2024/11/21 19:26:03 by ytalai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
CC		=	cc
FLAGS	=	-Wall -Wextra -Werror
AR		=	ar -rc
RM		=	rm -f

SRC	=	ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcmp.c  ft_memmove.c ft_memset.c  ft_strlcpy.c 	ft_bzero.c			\
	   	ft_isalpha.c ft_isdigit.c ft_memchr.c  ft_memcpy.c  ft_strlcat.c ft_strlen.c ft_strncmp.c  ft_calloc.c 			\
		ft_strchr.c ft_strrchr.c ft_toupper.c ft_tolower.c ft_atoi.c ft_strdup.c ft_strnstr.c ft_substr.c ft_strjoin.c	\
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\
		ft_putstr_fd.c

OBJ	=	$(SRC:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o :	%.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: clean