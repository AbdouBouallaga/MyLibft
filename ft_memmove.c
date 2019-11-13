/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:50:53 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/23 00:37:14 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*srcc;
	unsigned char	*dest;

	i = 0;
	srcc = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (srcc < dest)
	{
		while (i < n)
		{
			dest[(n - i) - 1] = srcc[(n - i) - 1];
			i++;
		}
	}
	else
		while (i < n)
		{
			dest[i] = srcc[i];
			i++;
		}
	return (dst);
}
