# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/01 17:19:16 by rsarri-c          #+#    #+#              #
#    Updated: 2021/08/02 20:32:23 by rsarri-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
LIB1	= ar -rcs
LIB2	= ranlib
RM		= /bin/rm -f

NAME	= libft.a

INCLUDE	= libft.h
SRCS	= ft_isalnum.c ft_isalpha.c ft_isdigit.c  ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_toupper.c ft_tolower.c ft_strlcpy.c ft_strlcat.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
		  
OBJS	= $(SRCS:.c=.o)
BONUS_S	=
BONUS_O	= $(BONUS_S:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)

bonus:		$(NAME) $(BONUS_O)
			$(LIB1) $(NAME) $(BONUS_O)
			$(LIB2) $(NAME)

.c.o:
			$(CC) $(CFLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS) $(BONUS_O)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

.PHONY:		all clean fclean re bonus rebonus
