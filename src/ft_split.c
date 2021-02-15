/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:54:19 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/07 00:01:23 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**splt_clr(char **p)
{
	int i;

	i = -1;
	while (p[++i] != NULL)
		free(p[i]);
	free(p);
	return (NULL);
}

size_t		splt_strnum(char const *s, char c)
{
	size_t	n;
	int		flag;

	flag = 0;
	n = 0;
	while (*s)
	{
		if (!flag && *s != c && ++n)
			flag = 1;
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (n);
}

char		**ft_split(char const *s, char c)
{
	char	**p;
	size_t	arr_len;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	arr_len = splt_strnum(s, c);
	if (!(p = ft_calloc(arr_len + 1, sizeof(*p))))
		return (NULL);
	i = -1;
	while (++i < arr_len)
	{
		end = 0;
		while (*s == c)
			s++;
		while (s[end] && s[end] != c)
			end++;
		if (*s && !(p[i] = ft_substr(s, 0, end)))
			return (splt_clr(p));
		s += end;
	}
	return (p);
}
