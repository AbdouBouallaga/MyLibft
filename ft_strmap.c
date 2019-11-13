/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:48:01 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/08 22:00:04 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;
	char	*ss;

	i = 0;
	if (!s)
		return (0);
	ss = (char *)s;
	if (!(str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (0);
	while (ss[i])
	{
		str[i] = f(ss[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
