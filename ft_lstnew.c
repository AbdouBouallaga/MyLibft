/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 19:44:01 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/20 22:50:26 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list))))
		return (NULL);
	new->next = NULL;
	if (!(content))
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else if ((new->content = malloc(content_size)))
	{
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	else
	{
		free(new);
		return (0);
	}
	return (new);
}
