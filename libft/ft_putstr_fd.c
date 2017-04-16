/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:20:50 by iburel            #+#    #+#             */
/*   Updated: 2016/11/05 12:06:31 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
	char	*tmp;

	if (str == NULL)
		return ;
	tmp = (char *)str;
	while (*tmp)
	{
		ft_putchar_fd(*tmp, fd);
		tmp++;
	}
}
