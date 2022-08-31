# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgill <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 15:35:30 by hgill             #+#    #+#              #
#    Updated: 2022/08/31 15:23:51 by hgill            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 
OBJS	= $(SRCS:.c=.o)
CC	= gcc
RM	= rm -f
CFLAGS	= -Wall _Wextra -Werror -I

NAME	=

all:	$(NAME)

$(NAME):	$(OBJS)
	@ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re
