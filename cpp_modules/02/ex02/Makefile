# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 10:31:39 by rgarcia-          #+#    #+#              #
#    Updated: 2021/11/03 10:31:41 by rgarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed

SRCS		=	main.cpp			\
				fixed.cpp

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