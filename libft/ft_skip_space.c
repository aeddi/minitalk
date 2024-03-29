/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 21:01:23 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/06 13:09:48 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_space(char **str)
{
	while ( **str == '\t' || **str == '\n' || **str == '\v' || **str == '\f'
			|| **str == '\r' || **str == ' ')
		*str += 1;
}
