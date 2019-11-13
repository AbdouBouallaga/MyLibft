/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:55:08 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/26 04:34:42 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	cc;
	int		j;

	i = 0;
	str = (char *)s;
	j = ft_strlen(str);
	cc = (char)c;
	while (i < (j + 1))
	{
		if (str[i] == cc)
			return (str + i);
		i++;
	}
	return (NULL);
}
