/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeddi <aeddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 17:23:07 by aeddi             #+#    #+#             */
/*   Updated: 2014/02/09 17:23:16 by aeddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

/*
** Display functions
*/
void			connect_display(int connexion);
void			id_display(char *name, int pid);
void			sender_display(char *id, int pid, int color);

/*
** Recept functions
*/
unsigned int	recept_pid(int bit);
unsigned int	recept_strlen(int bit);
char			recept_char(int bit);

/*
** Singleton functions
*/
unsigned int	pid_singleton(unsigned int call);
unsigned int	strlen_singleton(unsigned int call);
char			char_singleton(char call);

/*
** Signal functions
*/
void			signal_handler(int type);
# define PID	1
# define STRLEN	2
# define CHAR	3

#endif /* !SERVER_H */
