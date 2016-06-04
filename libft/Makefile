# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/06 02:00:45 by qhusler           #+#    #+#              #
#    Updated: 2016/06/02 05:16:56 by qhusler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC_NAME = ft_memset.c \
		   ft_bzero.c \
		   ft_memcpy.c \
		   ft_memccpy.c \
		   ft_memmove.c \
		   ft_memcmp.c \
		   ft_memchr.c \
		   ft_strlen.c \
		   ft_strdup.c \
	 	   ft_strcpy.c \
	 	   ft_strncpy.c \
	 	   ft_strcat.c \
	 	   ft_strncat.c \
		   ft_strlcat.c \
		   ft_strchr.c \
	 	   ft_strrchr.c \
	 	   ft_strstr.c \
	 	   ft_strnstr.c \
		   ft_strcmp.c \
		   ft_strncmp.c \
	 	   ft_atoi.c \
	 	   ft_isalpha.c \
	 	   ft_isdigit.c \
	 	   ft_isalnum.c \
	 	   ft_isascii.c \
	 	   ft_isprint.c \
		   ft_toupper.c \
	 	   ft_tolower.c \
	 	   ft_memalloc.c \
		   ft_memdel.c \
		   ft_strnew.c \
		   ft_strdel.c \
	 	   ft_strclr.c \
	 	   ft_striter.c \
	 	   ft_striteri.c \
	 	   ft_strmap.c \
	 	   ft_strmapi.c \
	 	   ft_strequ.c \
	 	   ft_strnequ.c \
	 	   ft_strsub.c \
	 	   ft_strjoin.c \
		   ft_strtrim.c	\
		   ft_strsplit.c \
	 	   ft_itoa.c \
		   ft_putchar.c \
	 	   ft_putstr.c \
		   ft_putstr_color.c \
		   ft_putendl.c \
	 	   ft_putnbr.c \
	 	   ft_putchar_fd.c \
		   ft_putstr_fd.c \
	 	   ft_putendl_fd.c \
	 	   ft_putnbr_fd.c \
		   ft_lstnew.c \
		   ft_lstdelone.c \
		   ft_lstdel.c \
		   ft_lstadd.c \
		   ft_lstiter.c \
		   ft_lstmap.c \
		   ft_pgcd.c \
		   ft_isblank.c \
		   ft_isspace.c \
		   ft_isprime.c \
		   ft_strnlen.c \
		   ft_string_swap.c \
		   ft_epur_str.c \
		   ft_putnbrendl.c \
		   ft_xrotn.c \
		   ft_xntor.c
OBJ_NAME = $(SRC_NAME:.c=.o)
AR = ar rc
RLIB = ranlib
HDR = -I libft.h
RM = rm -f

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAG) $(SRC_NAME)
	@$(AR) $(NAME) $(OBJ_NAME)
	@$(RLIB) $(NAME)

clean:
	@$(RM) $(OBJ_NAME)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
