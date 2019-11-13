/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 16:43:06 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/24 14:53:05 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	i;

	i = 0;
	if (!(dup = ((char *)malloc(sizeof(char) * ft_strlen(str) + 1))))
		return (0);
	ft_strcpy(dup, str);
	return (dup);
}
