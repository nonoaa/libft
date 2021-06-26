/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:37:40 by byahn             #+#    #+#             */
/*   Updated: 2021/05/10 15:20:58 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		tmp;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		tmp = n % 10;
		tmp = -tmp;
		if (n <= -10)
		{
			n /= 10;
			n = -n;
			ft_putnbr_fd(n, fd);
		}
		ft_putchar_fd(tmp + '0', fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', fd);
}
