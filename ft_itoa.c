/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 21:51:18 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 03:05:34 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		lenn(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = lenn(n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_bzero(str, len + 1);
	if (n == -2147483648)
	{
		str[len - 1] = '8';
		n = n / 10;
		len--;
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (str[0] == '\0' || (str[1] == '\0' && n != 0))
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}
