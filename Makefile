# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/28 15:32:44 by vabad-ro          #+#    #+#              #
#    Updated: 2026/01/28 20:43:38 by vabad-ro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printchr.c  ft_printchr.o  ft_printf.c  ft_printhexa.c  ft_printhexamin.c  ft_printnbr.c  ft_printptr.c  ft_printstr.c  ft_printunbr.c

OBJ = $(SRC:.c=.o)

INCLUDE = libftprintf.h

AR = ar rcs
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)


%.o: %.c $(INCLUDE) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re : fclean all

bonus: $(NAME)

.PHONY: all clean fclean re