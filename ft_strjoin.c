/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:36:34 by byahn             #+#    #+#             */
/*   Updated: 2021/05/06 18:35:32 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(out = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (0);
	while (i < s1_len)
	{
		out[i] = s1[i];
		i++;
	}
	while (j < s2_len)
		out[i++] = s2[j++];
	out[i] = '\0';
	return (out);
}
