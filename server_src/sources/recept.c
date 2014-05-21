/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recept.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/08 11:07:32 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:16:07 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	recept_pid(int bit)
{
	static int			count = 0;
	static unsigned int	result = 0;

	if (count == 32)
		count = result = 0;
	result = result | (bit << count);
	count++;
	if (count == 32)
		return (result);
	return (0);
}

unsigned int	recept_strlen(int bit)
{
	static int			count = 0;
	static unsigned int	result = 0;

	if (count == 32)
		count = result = 0;
	result = result | (bit << count);
	count++;
	if (count == 32)
		return (result);
	return (0);
}

char			recept_char(int bit)
{
	static int	count = 0;
	static char	result = 0;

	if (count == 8)
		count = result = 0;
	result = result | (bit << count);
	count++;
	if (count == 8)
		return (result);
	return (0);
}
