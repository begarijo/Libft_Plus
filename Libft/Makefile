# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 12:51:51 by begarijo          #+#    #+#              #
#    Updated: 2023/03/31 14:53:14 by begarijo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GREEN		=	\e[0;32m
RED			=	\e[0;33m
PINK		=	\e[0;95m
END			=	\e[0m

NAME		=	libft.a

SRC			=	ft_isalpha.c ft_isdigit.c ft_toupper.c \
				ft_strchr.c ft_isalnum.c ft_isascii.c \
				ft_strlcat.c ft_strlen.c ft_isprint.c \
				ft_strrchr.c ft_memcpy.c ft_memchr.c \
				ft_tolower.c ft_memset.c ft_memmove.c \
				ft_strlcpy.c ft_strncmp.c ft_strnstr.c \
				ft_putchar.c ft_putnbr.c \
				ft_atoi.c ft_memcmp.c ft_bzero.c ft_calloc.c \
				ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_split.c ft_strtrim.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putstr_fd.c \
				ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
				ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
				ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
				ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
				ft_printchar.c ft_printstr.c ft_printnumber.c ft_printunsigned.c \
				ft_printhexa.c ft_printptr.c ft_printf.c \
				get_next_line.c get_next_line_utils.c \


OBJT		=	$(SRC:.c=.o)

CFLAGS		=	-Wall -Werror -Wextra

all:			$(NAME)

$(NAME):
				@gcc -c $(CFLAGS) $(SRC)
				@ar rcs $(NAME) $(OBJT)
				@printf "$(GREEN) Ready to go! :)$(END)\n"

clean:
				@rm -f $(OBJT)
				@printf "$(PINK) Objetos eliminados ;)$(END)\n"


fclean: 		clean
				@rm -f $(NAME)
				@printf "$(PINK) Ejecutable chao pescao :D $(END)\n"

re: 			fclean all

.PHONY: all, clean, fclean, re
