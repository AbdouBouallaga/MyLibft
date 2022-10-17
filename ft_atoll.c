#include "libft.h"

long long 		ft_atoll(const char *str)
{
	long long	total;
	long long	sign;
	long long	i;

	sign = 1;
	total = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n'
			|| str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] > 47 && str[i] < 58)
	{
		total = total * 10 + str[i] - '0';
		i++;
	}
	return (total * sign);
}