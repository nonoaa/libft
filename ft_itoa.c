/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:36:59 by byahn             #+#    #+#             */
/*   Updated: 2021/05/10 14:44:58 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static int	num_length(int n)
{
	int		len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char		*out;
	int			len;

	len = num_length(n);
	if (!(out = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	out[len--] = '\0';
	if (n < 0)
	{
		out[0] = '-';
		n *= -1;
	}
	if (n == 0)
		out[len] = '0';
	while (n != 0)
	{
		out[len] = '0' + num_abs(n % 10);
		n /= 10;
		len--;
	}
	return (out);
}
