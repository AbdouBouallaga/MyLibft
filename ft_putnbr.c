/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:58:11 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 03:07:02 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*countr(long n, size_t *t)
{
	t[0] = 1;
	t[1] = 0;
	while (n)
	{
		n = n / 10;
		t[0] = t[0] * 10;
		t[1]++;
	}
	t[0] /= 10;
	return (t);
}

void			ft_putnbr(int n)
{
	size_t	i[3];
	long	nn;
	long	r;

	nn = (long)n;
	i[2] = 0;
	countr(nn, i);
	if (nn < 0)
	{
		write(1, "-", 1);
		nn = nn * -1;
	}
	if (nn == 0)
		write(1, "0", 1);
	while (i[2] < i[1])
	{
		r = nn / i[0] + 48;
		write(1, &r, 1);
		nn = nn % i[0];
		i[0] = i[0] / 10;
		i[2]++;
	}
}
