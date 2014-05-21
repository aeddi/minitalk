# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/09 18:48:15 by aeddi             #+#    #+#              #
#    Updated: 2014/02/09 18:55:57 by aeddi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	minitalk

all			:	$(NAME)

$(NAME)		:
	$(MAKE) -C libft/
	$(MAKE) -C server_src/
	$(MAKE) -C client_src/

clean		: 
	$(MAKE) clean -C libft/
	$(MAKE) clean -C server_src/
	$(MAKE) clean -C client_src/

fclean		:
	$(MAKE) fclean -C libft/
	$(MAKE) fclean -C server_src/ 
	$(MAKE) fclean -C client_src/
	
re			:	fclean all

.PHONY: all clean fclean re
