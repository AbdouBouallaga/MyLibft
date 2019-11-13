/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 21:25:49 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/19 13:49:26 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s11;
	size_t	s22;

	if (!(s1 && s2))
		return (NULL);
	s11 = ft_strlen(s1);
	s22 = ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * s11 + s22 + 1)))
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
