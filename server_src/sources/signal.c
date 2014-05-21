/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 14:36:18 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:54:08 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <server.h>

static void	sig_recept_pid(int signum)
{
	unsigned int	ret;

	ret = 0;
	if (signum == SIGUSR1)
		ret = recept_pid(0);
	else if (signum == SIGUSR2)
		ret = recept_pid(1);
	if (ret)
		pid_singleton(ret);
}

static void	sig_recept_strlen(int signum)
{
	unsigned int	ret;

	ret = 0;
	if (signum == SIGUSR1)
		ret = recept_strlen(0);
	else if (signum == SIGUSR2)
		ret = recept_strlen(1);
	if (ret)
		strlen_singleton(ret);
	kill(pid_singleton(0), SIGUSR1);
}

static void	sig_recept_char(int signum)
{
	char			ret;

	ret = 0;
	if (signum == SIGUSR1)
		ret = recept_char(0);
	else if (signum == SIGUSR2)
		ret = recept_char(1);
	if (ret)
		char_singleton(ret);
	kill(pid_singleton(0), SIGUSR1);
}

static void	sig_void(int signum)
{
	(void)signum;
}

void		signal_handler(int type)
{
	if (!type)
	{
		signal(SIGTSTP, sig_void);
		signal(SIGQUIT, sig_void);
		signal(29, sig_void);
	}
	else if (type == PID)
	{
		signal(SIGUSR1, sig_recept_pid);
		signal(SIGUSR2, sig_recept_pid);
	}
	else if (type == STRLEN)
	{
		signal(SIGUSR1, sig_recept_strlen);
		signal(SIGUSR2, sig_recept_strlen);
	}
	else if (type == CHAR)
	{
		signal(SIGUSR1, sig_recept_char);
		signal(SIGUSR2, sig_recept_char);
	}
}
