/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iburel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:25:47 by iburel            #+#    #+#             */
/*   Updated: 2016/11/07 12:22:40 by iburel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	char	*tmp;

	if (*s2 == '\0')
		return ((char *)s1);
	if (ft_strlen(s2) > ft_strlen(s1))
		return (NULL);
	tmp = (char *)s1;
	while (*tmp)
	{
		if (*tmp == *s2)
		{
			i = 0;
			while (tmp[i] == s2[i] && s2[i])
				i++;
			if (s2[i] == '\0')
				return (tmp);
		}
		tmp++;
	}
	return (NULL);
}
