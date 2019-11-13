/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babdelka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 19:00:57 by babdelka          #+#    #+#             */
/*   Updated: 2019/04/22 03:08:20 by babdelka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	*counter(long n, size_t *t)
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

static void		ft_putnbfd(int n, int fd)
{
	size_t	i[3];
	long	nn;
	long	r;

	nn = (long)n;
	i[2] = 0;
	counter(nn, i);
	if (nn < 0)
	{
		write(fd, "-", 1);
		nn = nn * -1;
	}
	if (nn == 0)
		write(fd, "0", 1);
	while (i[2] < i[1])
	{
		r = nn / i[0] + 48;
		write(fd, &r, 1);
		nn = nn % i[0];
		i[0] = i[0] / 10;
		i[2]++;
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	ft_putnbfd(n, fd);
}
