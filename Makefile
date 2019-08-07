# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xapadoan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/12 16:39:00 by xapadoan          #+#    #+#              #
#    Updated: 2018/12/10 13:20:01 by xapadoan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CC_FLAGS=-Wall -Wextra -Werror
IFLAGS=-iquote ./
SRCS=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	 ft_memcmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	 ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c ft_itoa.c ft_strlen.c\
	 ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c\
	 ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c\
	 ft_strcmp.c ft_strncmp.c ft_strndup.c ft_memalloc.c ft_memdel.c\
	 ft_strnew.c ft_strdel.c ft_strmap.c ft_striteri.c ft_striter.c ft_strclr.c\
	 ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strtrim.c\
	 ft_strjoin.c ft_strsplit.c ft_putchar.c ft_putstr.c ft_putendl.c\
	 ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	 ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c\
	 ft_lstiter.c ft_lstmap.c ft_isupper.c ft_islower.c ft_strcasestr.c\
	 ft_lstapp.c ft_strappend.c ft_print_word_tab.c ft_strlcpy.c ft_strcdup.c\
	 ft_strnchr.c ft_strtrunc.c ft_dellst.c ft_putbit.c ft_heavybit.c ft_sqrt.c\
	 ft_pointnew.c ft_pointdel.c ft_puterror.c ft_putwarning.c ft_errexit.c\
	 ft_get_nextline.c
OBJS=$(SRCS:.c=.o)
INCLUDES=libft.h
NAME=libft.a

$(NAME) : $(OBJS)
	ar rc $@ $^
	ranlib $@

$(OBJS) : $(SRCS) $(INCLUDES)
%.o : %.c $(INCLUDES)
	$(CC) $(CC_FLAGS) -c $< $(IFLAGS)

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS)
	rm -f $(NAME)

all : $(NAME)

re : fclean all
