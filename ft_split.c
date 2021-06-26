/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byahn <byahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:36:53 by byahn             #+#    #+#             */
/*   Updated: 2021/05/10 13:58:01 by byahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		word_count(const char *str, char c)
{
	size_t		i;
	size_t		count;

	i = 0;
	count = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	while (str[i] != '\0')
	{
		while (str[i] != c && str[i] != '\0')
			i++;
		while (str[i] == c && str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

static void			free_out(char **out, size_t word)
{
	size_t		i;

	i = 0;
	while (i < word)
	{
		free(out[i]);
		i++;
	}
	free(out);
}

static char			**ft_split2(char const *s, char c, char **out, size_t i)
{
	size_t		j;
	size_t		word;

	word = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (s[i + j] != c && s[i + j] != '\0')
			j++;
		if (j > 0)
		{
			if (!(out[word] = (char *)malloc(sizeof(char) * (j + 1))))
			{
				free_out(out, word);
				return (0);
			}
			ft_strlcpy(out[word], s + i, j + 1);
			word++;
			i = i + j;
			continue;
		}
		i++;
	}
	out[word] = 0;
	return (out);
}

char				**ft_split(char const *s, char c)
{
	char		**out;

	if (!s)
		return (0);
	if (!(out = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (0);
	return (ft_split2(s, c, out, 0));
}
