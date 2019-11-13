/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:27:59 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 04:15:57 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	r;
	char	*haystac;

	i = 0;
	haystac = (char *)haystack;
	if (!needle[i])
		return (haystac);
	while (haystack[i])
	{
		if (needle == haystack)
			return (haystac);
		j = 0;
		r = i;
		while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
		{
			j++;
			if (!(needle[j]))
				return (haystac + r);
		}
		i++;
	}
	return (NULL);
}
