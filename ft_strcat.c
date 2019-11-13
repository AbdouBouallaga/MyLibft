/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:32:33 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/24 14:58:34 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t			i;
	size_t			j;
	unsigned char	*s22;
	unsigned char	*s11;

	i = 0;
	j = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (s11[j])
	{
		j++;
	}
	while (s22[i])
	{
		s11[j] = s22[i];
		i++;
		j++;
	}
	s11[j] = '\0';
	return (s1);
}
