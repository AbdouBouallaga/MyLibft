/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:27:30 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/05 18:58:17 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t			i;
	unsigned char	*srcc;
	unsigned char	*dstt;

	i = 0;
	srcc = (unsigned char *)src;
	dstt = (unsigned char *)dst;
	while (src[i] && i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
