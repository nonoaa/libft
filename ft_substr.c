/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:32 by byahn             #+#    #+#             */
/*   Updated: 2021/05/07 17:34:21 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*out;
	unsigned int	s_len;
	size_t			i;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	i = 0;
	if (s_len <= start)
	{
		if (!(out = (char *)malloc(sizeof(char) * 1)))
			return (0);
		out[0] = '\0';
		return (out);
	}
	if (!(out = (char *)malloc(sizeof(char) *
					(s_len - start > len ? len + 1 : s_len - start + 1))))
		return (0);
	while (s[i] && len-- > 0)
	{
		out[i] = s[i + start];
		i++;
	}
	out[i] = '\0';
	return (out);
}
