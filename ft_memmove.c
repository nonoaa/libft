/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:10:23 by byahn             #+#    #+#             */
/*   Updated: 2021/05/05 15:19:01 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;

	if (!dst && !src)
		return (0);
	if (dst <= src)
	{
		i = 0;
		while (len > 0)
		{
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			len--;
			i++;
		}
	}
	else
	{
		i = len;
		while (len > 0)
		{
			i--;
			*((unsigned char *)dst + i) = *((unsigned char *)src + i);
			len--;
		}
	}
	return (dst);
}
