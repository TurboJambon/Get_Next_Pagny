/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:20:42 by iburel            #+#    #+#             */
/*   Updated: 2016/11/05 12:05:24 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *str)
{
	char	*tmp;

	if (str == NULL)
		return ;
	tmp = (char *)str;
	while (*tmp)
	{
		ft_putchar(*tmp);
		tmp++;
	}
}
