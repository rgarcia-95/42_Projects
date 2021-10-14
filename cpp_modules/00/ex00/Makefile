# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/13 13:13:16 by rgarcia-          #+#    #+#              #
#    Updated: 2021/10/13 13:22:50 by rgarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

SRCS		=	megaphone.cpp

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