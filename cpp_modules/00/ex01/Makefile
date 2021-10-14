# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 13:38:10 by rgarcia-          #+#    #+#              #
#    Updated: 2021/10/13 13:42:59 by rgarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	contact.cpp			\
				phonebook.cpp

OBJS		=	${SRCS:.cpp=.o}

CCX			=	clang++

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

all:		${NAME}

${NAME}:	${OBJS}
			${CCX} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re