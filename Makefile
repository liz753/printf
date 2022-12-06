# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrank <lfrank@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 17:16:06 by lfrank            #+#    #+#              #
#    Updated: 2022/11/10 20:37:43 by lfrank           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -c

RM = rm -f 

ARCHIVE = ar rcs $(NAME)

SRC = ft_printchar.c ft_printstr.c ft_printnbr.c ft_printf.c \
		ft_printhex.c ft_digitlen.c ft_printpointer.c ft_printnbr_u.c

OBJS = ${SRC:.c=.o}


all		: $(NAME)

$(NAME)	:
	$(CC) $(CFLAGS) $(SRC)
	$(ARCHIVE) $(OBJS)

	
clean	: 
	$(RM) $(OBJS) 

fclean	: clean
	$(RM) $(NAME) 

re		: fclean all

.PHONY 	: all clean fclean re  
