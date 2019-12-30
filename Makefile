# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhaouhao <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/24 02:13:23 by dhaouhao          #+#    #+#              #
#    Updated: 2019/12/27 03:08:42 by dhaouhao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	ft_format_c.c ft_init_struct.c ft_convert_str.c \
ft_apply_width_diuxp.c ft_substr.c ft_format_diuxp.c ft_is_type.c ft_printf.c \
ft_set_prec.c ft_return_precision_diuxp.c ft_format_s.c ft_isdigit.c \
ft_set_width.c ft_return_width_diuxp.c ft_lltoa.c ft_putchar.c ft_strdup.c \
ft_atoi.c ft_get_formated.c ft_memcpy.c ft_putstr.c ft_strjoin.c \
ft_fill_struct.c ft_memset.c ft_strlen.c ft_hex_to_str.c ft_isprint.c \
ft_apply_precision_n_width_diuxp.c ft_apply_precision_diuxp.c ft_strupcase.c

HEADER		=	ft_printf.h

OBJS		=	${SRCS:.c=.o}

NAME		=	libftprintf.a

.c.o:
			gcc -Wall -Wextra -Werror -c -I./${HEADER} $< -o ${<:.c=.o}
			@echo "\033[92mstatus ${<:.c=.o} is [OK]\033[0m"

${NAME}:	${OBJS} ${HEADER}
			ar rc $@ $^
			ranlib ${NAME}
			@echo "\033[92mstatus ${NAME} is [OK]\033[0m"

all:		${NAME}
			@echo "\033[92mstatus $@ is [OK]\033[0m"

clean:
			rm -f ${OBJS}
			@echo "\033[92mstatus $@ is [OK]\033[0m"

fclean:		clean
			rm -f ${NAME}
			@echo "\033[92mstatus $@ [OK]\033[0m"

re:			fclean all
			@echo "\033[92mstatus $@ [OK]\033[0m"

.PHONY:		fclean clean re all
