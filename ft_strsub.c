/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:07:00 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/19 00:27:42 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	l;
	char			*s1;
	char			*s2;

	i = 0;
	l = (unsigned int)len;
	s1 = (char *)s;
	if (!s)
		return (NULL);
	if (!(s2 = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i < len)
	{
		s2[i] = s1[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
