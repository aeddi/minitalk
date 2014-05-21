/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 10:59:46 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 18:39:03 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <server.h>
#include <signal.h>

static int	recept_client_pid(void)
{
	unsigned int	pid;

	signal_handler(PID);
	pid = pid_singleton(0);
	pid = pid_singleton(pid);
	while ((pid = pid_singleton(0)) == 0)
		;
	return (pid);
}

static char	*recept_message(int client)
{
	char			*message;
	unsigned int	strlen;
	unsigned int	i;
	char			c;

	i = 0;
	signal_handler(STRLEN);
	kill(client, SIGUSR1);
	while ((strlen = strlen_singleton(0)) == 0)
		;
	message = ft_strnew(strlen);
	signal_handler(CHAR);
	while (i != strlen)
	{
		usleep(200);
		kill(client, SIGUSR1);
		while ((c = char_singleton(0)) == 0)
			;
		message[i] = c;
		i++;
	}
	return (message);
}

int			main(void)
{
	pid_t	server;
	pid_t	client;
	char	*message;

	server = getpid();
	ft_putchar('\n');
	id_display("Server", server);
	signal_handler(0);
	while (42)
	{
		client = recept_client_pid();
		ft_putchar('\n');
		id_display("Client", client);
		connect_display(1);
		message = recept_message(client);
		sender_display("Client", client, 2);
		ft_putendl(message);
		ft_strdel(&message);
	}
	return (0);
}
