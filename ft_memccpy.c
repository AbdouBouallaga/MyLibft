/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:29:22 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/01 21:46:01 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;
	unsigned char	cc;

	i = 0;
	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	cc = (unsigned char)c;
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
		if (srcc[i - 1] == cc)
		{
			return (dest + i);
		}
	}
	return (NULL);
}
