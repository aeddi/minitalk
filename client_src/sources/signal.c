/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/06 14:36:18 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:54:27 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>

static void	sig_callback(int signum)
{
	(void)signum;
}

void		signal_handler(void)
{
	signal(SIGTSTP, sig_callback);
	signal(SIGQUIT, sig_callback);
	signal(29, sig_callback);
	signal(SIGUSR1, sig_callback);
}
