/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 17:23:27 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:23:29 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

/*
** Display functions
*/
void	connect_display(int connexion);
void	id_display(char *name, int pid);
void	sender_display(char *id, int pid, int color);

/*
** Send functions
*/
int		send_pid(unsigned int num, unsigned int pid);
int		send_strlen(unsigned int num, unsigned int pid);
int		send_char(char c, unsigned int pid);

/*
** Signal functions
*/
void	signal_handler(void);

#endif /* !SERVER_H */
