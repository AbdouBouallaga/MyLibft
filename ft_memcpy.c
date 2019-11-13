/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <babdelka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:18:46 by babdelka          #+#    #+#             */
/*   Updated: 2019/07/27 03:17:00 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	destt = (unsigned char *)dest;
	srcc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (dest);
}
