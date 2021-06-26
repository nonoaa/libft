/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 13:28:40 by byahn             #+#    #+#             */
/*   Updated: 2021/05/05 19:45:38 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*out;

	i = 0;
	out = (unsigned char *)s;
	while (i < n)
	{
		if (*(out + i) == (unsigned char)c)
			return (out + i);
		i++;
	}
	return (0);
}
