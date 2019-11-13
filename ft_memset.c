/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 21:39:07 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/01 20:14:36 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*bb;

	i = 0;
	bb = (unsigned char *)b;
	while (i < n)
	{
		bb[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
