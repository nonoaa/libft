/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 17:28:43 by byahn             #+#    #+#             */
/*   Updated: 2021/05/05 15:18:32 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*out;

	i = 0;
	if (!dst && !src)
		return (0);
	out = dst;
	while (n > 0)
	{
		out[i] = *((unsigned char *)src + i);
		n--;
		i++;
	}
	return (out);
}
