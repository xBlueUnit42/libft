# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/31 18:49:49 by abbesbes          #+#    #+#              #
#    Updated: 2018/12/04 12:15:15 by abbesbes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC = gcc
FLAGS = -W -Wall -Werror -Wextra
OBJ = ft_memset.o \
				ft_bzero.o \
				ft_memcpy.o \
				ft_memccpy.o \
				ft_strlen.o \
				ft_memmove.o \
				ft_memchr.o \
				ft_memcmp.o \
				ft_strcpy.o \
				ft_strncpy.o \
				ft_strdup.o \
				ft_strcat.o \
				ft_strncat.o \
				ft_strlcat.o \
				ft_strchr.o \
				ft_strrchr.o \
				ft_strstr.o \
				ft_strnstr.o \
				ft_strcmp.o \
				ft_strncmp.o \
				ft_atoi.o \
				ft_isalpha.o \
				ft_isdigit.o \
				ft_isalnum.o \
				ft_isascii.o \
				ft_isprint.o \
				ft_toupper.o \
				ft_tolower.o \
				ft_memalloc.o \
				ft_memdel.o \
				ft_strnew.o \
				ft_strdel.o \
				ft_strclr.o \
				ft_striter.o \
				ft_striteri.o \
				ft_strmap.o \
				ft_strmapi.o \
				ft_strequ.o \
				ft_strnequ.o \
				ft_strsub.o \
				ft_strjoin.o \
				ft_strtrim.o \
				ft_strsplit.o \
				ft_strsplit.o \
				ft_itoa.o \
				ft_putchar.o \
				ft_putchar_fd.o \
				ft_putstr.o \
				ft_putendl.o \
				ft_putnbr.o \
				ft_putnbr_fd.o \
				ft_putstr_fd.o \
				ft_putendl_fd.o \
				ft_lstnew.o \
				ft_lstdelone.o \
				ft_lstdel.o \
				ft_lstadd.o \
				ft_lstiter.o \
				ft_lstmap.o \
				ft_strndup.o \
				ft_strndup_i.o \
				ft_isspace.o \
				ft_isblank.o \
				ft_iscntrl.o \
				ft_islower.o \
				ft_isupper.o \
				ft_count_sep_words.o \
				ft_strrev.o \
				ft_pgcd.o \
				ft_arr_foreachij.o \
				ft_arr_print.o \
				ft_lst_addlast.o \
				ft_lst_putone.o \
				ft_lst_putone_nl.o \
				ft_lst_getby_content.o \
				ft_lst_getby_csize.o \
				ft_lst_getby_i.o \
				ft_strlenz.o \
				ft_swap.o \
				get_next_line.o \
				ft_strcontains.o

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $^ -o $@ -I ./includes

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
