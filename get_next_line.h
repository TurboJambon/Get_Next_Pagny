/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchirol <dchirol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 18:29:00 by niragne           #+#    #+#             */
/*   Updated: 2017/04/11 17:22:56 by dchirol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 8

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft.h"

typedef struct			s_gnl
{
	char			*tmp;
	char			buf[BUFF_SIZE + 1];
	int				rd;
}						t_gnl;

int						get_next_line(const int fd, char **line);

#endif
