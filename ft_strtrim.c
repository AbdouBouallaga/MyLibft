/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:46:39 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 04:16:18 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*ft_strlenwsm(const char *s)
{
	size_t			*c;
	size_t			i;
	size_t			j;
	size_t			v;
	unsigned char	*str;

	i = 0;
	v = 0;
	j = ft_strlen(s);
	if (j != 0)
		j -= 1;
	if (!(c = (size_t *)malloc(sizeof(size_t) * 3)))
		return (0);
	str = (unsigned char *)s;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	c[0] = i;
	if (i > j)
		j = i;
	else
		while (str[j] == ' ' || str[j] == '\n' || str[j] == '\t')
			j--;
	c[1] = j;
	c[2] = j - i + 2;
	return (c);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	char	*ss;
	size_t	i[2];
	size_t	*c;

	if (!s)
		return (NULL);
	if (!(c = ft_strlenwsm(s)))
		return (NULL);
	ss = (char *)s;
	if (c[0] == c[1])
		c[2] -= 1;
	if (!(str = (char *)malloc(sizeof(char) * c[2])))
		return (NULL);
	i[0] = c[0];
	i[1] = 0;
	while (i[0] <= c[1])
	{
		str[i[1]] = ss[i[0]];
		i[0]++;
		i[1]++;
	}
	if (i[1] != 1)
		str[i[1]] = '\0';
	return (str);
}
