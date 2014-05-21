/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 11:07:45 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:59:04 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <client.h>
#include <unistd.h>

int	send_pid(unsigned int client, unsigned int server)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (client & (1 << i++))
		{
			if (kill(server, SIGUSR2) == -1)
			{
				connect_display(0);
				return (1);
			}
		}
		else
		{
			if (kill(server, SIGUSR1) == -1)
			{
				connect_display(0);
				return (1);
			}
		}
		if (i < 32)
			usleep(1000);
	}
	return (0);
}

int	send_strlen(unsigned int strlen, unsigned int server)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (strlen & (1 << i))
		{
			if (kill(server, SIGUSR2) == -1)
			{
				connect_display(0);
				return (1);
			}
		}
		else
		{
			if (kill(server, SIGUSR1) == -1)
			{
				connect_display(0);
				return (1);
			}
		}
		pause();
		i++;
	}
	return (0);
}

int	send_char(char c, unsigned int server)
{
	int	i;

	i = 0;
	pause();
	while (i < 8)
	{
		if (c & (1 << i++))
		{
			if (kill(server, SIGUSR2) == -1)
			{
				connect_display(0);
				return (1);
			}
		}
		else
		{
			if (kill(server, SIGUSR1) == -1)
			{
				connect_display(0);
				return (1);
			}
		}
		pause();
	}
	return (0);
}
