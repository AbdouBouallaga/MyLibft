/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:18:27 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/01 20:13:43 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1s;
	unsigned char	*s2s;

	s1s = (unsigned char *)s1;
	s2s = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1s[i] != s2s[i])
			return (s1s[i] - s2s[i]);
		i++;
	}
	return (0);
}
