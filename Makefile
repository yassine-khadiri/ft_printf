# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykhadiri <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 15:55:11 by ykhadiri          #+#    #+#              #
#    Updated: 2021/12/15 15:07:30 by ykhadiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC = ft_printf.c \
	  ft_putchar.c \
	  ft_putstr.c \
	  ft_putaddr.c \
	  ft_putnbr.c \
	  ft_putnbr_un.c \
	  ft_printxd_upper.c \
	  ft_printxd_lower.c \
	  ft_get_nb_len.c \
	  ft_get_nb_len_un.c

OBJ = $(SRC:.c=.o)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re: fclean $(NAME)
