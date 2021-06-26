/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:36:47 by byahn             #+#    #+#             */
/*   Updated: 2021/05/07 18:15:44 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	i;
	size_t	j;

	if (s1 && set)
	{
		i = 0;
		j = ft_strlen(s1) - 1;
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j] && ft_strchr(set, s1[j]) && i < j)
			j--;
		if (!(out = (char *)malloc(sizeof(char) * (j - i + 2))))
			return (0);
		ft_strlcpy(out, s1 + i, j - i + 2);
		return (out);
	}
	return (0);
}
