/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 15:42:54 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/04 05:42:59 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	cc;

	str = (char *)s;
	i = ft_strlen(str);
	cc = (char)c;
	while (i + 1)
	{
		if (str[i] == cc)
			return (str + i);
		i--;
	}
	return (NULL);
}
