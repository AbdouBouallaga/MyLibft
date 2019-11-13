/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:40:12 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 03:52:29 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		r;
	char	*haystac;

	i = 0;
	haystac = (char *)haystack;
	if (needle == haystack)
		return (haystac);
	if (!needle[i])
		return (haystac);
	while (haystack[i])
	{
		j = 0;
		r = i;
		while (haystack[i + j] == needle[j] && haystack[i + j])
		{
			j++;
			if (!(needle[j]))
				return (haystac + r);
		}
		i++;
	}
	return (NULL);
}
