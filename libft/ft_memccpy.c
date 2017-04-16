/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:18:01 by iburel            #+#    #+#             */
/*   Updated: 2016/11/10 13:41:08 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;
	size_t			i;

	tmp = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		tmp2[i] = tmp[i];
		if (tmp[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
