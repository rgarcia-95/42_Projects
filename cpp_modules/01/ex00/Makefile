# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgarcia- <rgarcia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/14 16:26:13 by rgarcia-          #+#    #+#              #
#    Updated: 2021/10/14 16:29:07 by rgarcia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	zombie

SRCS		=	main.cpp			\
				zombie.cpp			\
				newZombie.cpp		\
				randomChump.cpp

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