/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   singletons.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 14:08:37 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 18:39:11 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	pid_singleton(unsigned int call)
{
	static unsigned int	pid = 0;

	if (!call)
		return (pid);
	else if (call == pid)
		pid = 0;
	else
		pid = call;
	return (0);
}

unsigned int	strlen_singleton(unsigned int call)
{
	static unsigned int	strlen = 0;
	unsigned int		ret;

	ret = 0;
	if (!call)
	{
		if (strlen)
		{
			ret = strlen;
			strlen = 0;
		}
		return (ret);
	}
	else
		strlen = call;
	return (ret);
}

unsigned char	char_singleton(unsigned char call)
{
	static unsigned char	c = 0;
	unsigned char			ret;

	ret = 0;
	if (!call)
	{
		if (c)
		{
			ret = c;
			c = 0;
		}
		return (ret);
	}
	else
		c = call;
	return (0);
}
