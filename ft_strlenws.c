/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenws.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 23:42:53 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/10 08:34:16 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenws(const char *s)
{
	size_t			i;
	size_t			c;
	unsigned char	*str;

	i = 0;
	c = 0;
	str = (unsigned char *)s;
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\n'
				|| str[i] != '\t' || str[i] != '\v'
				|| str[i] != '\r' || str[i] != '\f')
			c++;
		i++;
	}
	return (c);
}
