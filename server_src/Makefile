# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/14 16:00:35 by aeddi             #+#    #+#              #
#    Updated: 2014/02/09 18:47:22 by aeddi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	../server
CC				=	gcc
GDB				?=	0
ifeq ($(GDB), 1)
	CFLAGS		=	-Wall -Wextra -Werror -pedantic -g3 -I $(LIBFT_DIR) -I $(INCS_DIR)
else
	CFLAGS		=	-Wall -Wextra -Werror -pedantic -O3 -I $(LIBFT_DIR) -I $(INCS_DIR)
endif
LFLAGS			=	-L $(LIBFT_DIR) -lft
LIBFT_DIR		=	../libft
INCS_DIR		=	./includes
OBJS_DIR		=	./objects
SRCS_DIR		=	./sources
OBJS			=	$(patsubst %.c, $(OBJS_DIR)/%.o, $(SRCS))
SRCS			=	server.c		\
					recept.c		\
					signal.c		\
					singletons.c	\
					display.c

all				:	$(NAME)

$(NAME)			:	$(OBJS_DIR) $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LFLAGS)

$(OBJS_DIR)/%.o	:	$(addprefix $(SRCS_DIR)/, %.c)
	$(CC) $(CFLAGS) -o $@ -c $^

$(OBJS_DIR)		:	make_libft
	@mkdir -p $(OBJS_DIR)

make_libft		:
	@$(MAKE) -C $(LIBFT_DIR)

fclean			:	clean
	rm -f $(NAME)

clean			:
	rm -rf $(OBJS_DIR)

re				:	fclean all

.PHONY: clean all re fclean
