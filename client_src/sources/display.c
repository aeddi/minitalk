/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 17:24:47 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:24:51 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	connect_display(int connexion)
{
	if (connexion)
		ft_putendl("\033[0;32mConnexion established\033[0;0m\n");
	else
		ft_putendl("\033[0;31mConnexion error. Wrong PID ?\033[0;0m\n");
}

void	id_display(char *name, int pid)
{
	ft_putstr("\033[4;37m");
	if (name)
		ft_putstr(name);
	else
		ft_putstr("no_name");
	ft_putstr(" PID is :\033[0;0m\033[1;34m ");
	ft_putnbr(pid);
	ft_putstr("\033[0;0m\n");
}

void	sender_display(char *id, int pid, int color)
{
	if (color == 1)
		ft_putstr("\033[4;34m");
	else if (color == 2)
		ft_putstr("\033[4;33m");
	ft_putstr(id);
	ft_putstr(" ");
	ft_putnbr(pid);
	ft_putstr(" :\033[0;0m ");
}
