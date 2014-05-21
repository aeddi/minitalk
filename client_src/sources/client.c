/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/06 12:59:46 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 18:44:55 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <client.h>

static int	send_message(int client, int server, char *message)
{
	int			i;
	static int	first = 0;

	i = 0;
	if (send_pid(client, server))
		return (1);
	if (!first)
		connect_display(1);
	pause();
	send_strlen(ft_strlen(message), server);
	while (message[i])
	{
		send_char(message[i], server);
		i++;
	}
	if (!first)
	{
		sender_display("Me", client, 2);
		ft_putstr(message);
		first++;
	}
	ft_putendl("\033[32m	Sended\033[0m");
	return (0);
}

int			main(int ac, char **av)
{
	pid_t	server;
	pid_t	client;

	if (ac != 3 || ft_strlen(av[2]) == 0)
	{
		ft_putendl_fd("usage : ./client server_pid ascii_message", 2);
		return (1);
	}
	client = getpid();
	server = ft_atoi(av[1]);
	ft_putchar('\n');
	id_display("Client", client);
	id_display("Server", server);
	signal_handler();
	return (send_message(client, server, av[2]));
}
