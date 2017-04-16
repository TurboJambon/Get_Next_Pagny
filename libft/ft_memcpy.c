/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:18:41 by iburel            #+#    #+#             */
/*   Updated: 2016/11/03 10:18:43 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*tmp2;

	tmp = (unsigned char *)src;
	tmp2 = (unsigned char *)dest;
	while (n > 0)
	{
		*tmp2 = *tmp;
		tmp++;
		tmp2++;
		n--;
	}
	return (dest);
}
