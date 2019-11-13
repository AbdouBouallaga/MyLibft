/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:55:44 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/29 01:21:25 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*lstt;
	t_list	*res;
	t_list	*temp;

	lstt = NULL;
	while (lst)
	{
		temp = f(lst);
		if (!lstt)
		{
			lstt = temp;
			lstt->next = NULL;
			res = lstt;
		}
		else
		{
			lstt->next = temp;
			temp->next = NULL;
			lstt = lstt->next;
		}
		lst = lst->next;
	}
	return (res);
}
