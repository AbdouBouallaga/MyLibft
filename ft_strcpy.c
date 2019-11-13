/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:45:23 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/01 21:02:32 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int				i;
	unsigned char	*srcc;
	unsigned char	*dstt;

	i = 0;
	srcc = (unsigned char *)src;
	dstt = (unsigned char *)dst;
	while (src[i])
	{
		dstt[i] = srcc[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
