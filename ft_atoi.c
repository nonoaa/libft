/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:22:35 by byahn             #+#    #+#             */
/*   Updated: 2021/05/07 21:59:28 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int		check_over_range(unsigned long long out, int neg)
{
	if (out > LLONG_MAX - 1 && neg == -1)
		return (0);
	if (out > LLONG_MAX && neg == 1)
		return (-1);
	return (out * neg);
}

int				ft_atoi(const char *str)
{
	size_t		i;
	int			neg;
	size_t		out;

	i = 0;
	neg = 1;
	out = 0;
	while (str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\v' || str[i] == '\f' ||
			str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	return (check_over_range(out, neg));
}
