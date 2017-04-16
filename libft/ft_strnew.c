/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:24:59 by iburel            #+#    #+#             */
/*   Updated: 2016/11/05 11:31:58 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*tmp;

	if (!(tmp = (char *)malloc(sizeof(*tmp) * (n + 1))))
		return (NULL);
	ft_bzero((void *)tmp, n + 1);
	return (tmp);
}
