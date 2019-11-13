/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 20:31:06 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 03:11:05 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**final(const char *s1, char c, char **str, size_t *res)
{
	size_t n[2];

	n[0] = 0;
	n[1] = 0;
	while (n[0] < ft_strlen(s1))
	{
		if (s1[n[0]] != c)
		{
			str[n[1]] = ft_strsub(s1, n[0], res[n[1]]);
			n[0] += res[n[1]];
			n[1]++;
		}
		n[0]++;
	}
	str[n[1]] = NULL;
	free(res);
	return (str);
}

static char	**len(const char *s1, char c, size_t j, char **str)
{
	size_t	i[3];
	size_t	*res;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	if (!(res = (size_t *)malloc(sizeof(size_t) * j)))
		return (NULL);
	while (i[0] < ft_strlen(s1))
	{
		while (s1[i[0]] != c && s1[i[0]])
		{
			i[0]++;
			i[2]++;
		}
		if (i[2])
		{
			res[i[1]] = i[2];
			i[2] = 0;
			i[1]++;
		}
		else
			i[0]++;
	}
	return (final(s1, c, str, res));
}

static char	**count(const char *s1, char **str, char c)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	while (i + 1 < ft_strlen(s1))
	{
		i++;
		if (s1[i] != c)
			j++;
		while (s1[i] != c && i < ft_strlen(s1))
		{
			i++;
		}
	}
	if (!(str = (char **)malloc(sizeof(char *) * (j + 1))))
		return (NULL);
	return (len(s1, c, j, str));
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i[2];

	if (!s)
		return (NULL);
	i[0] = 0;
	i[1] = ft_strlen(s);
	str = NULL;
	if (!(str = count(s, str, c)))
		return (NULL);
	return (str);
}
