/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/20 23:20:26 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/21 04:07:19 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *temp;

	if (alst == NULL)
		return ;
	current = *alst;
	while (current != NULL)
	{
		temp = current->next;
		del(current->content, current->content_size);
		free(current);
		current = temp;
	}
	*alst = NULL;
}
