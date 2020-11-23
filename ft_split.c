/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:56:39 by wquenten          #+#    #+#             */
/*   Updated: 2020/11/23 14:27:51 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*free_all(char **table, int cols)
{
	int i;

	i = 0;
	while (i < cols && table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
	return (NULL);
}

static int		colcount(char const *s, char c)
{
	int cols;
	int instr;

	instr = 0;
	cols = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s == c)
			instr = 0;
		else if (!instr)
		{
			instr = 1;
			cols++;
		}
		s++;
	}
	return (cols);
}

static int		splitlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s == c)
		s++;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char			**ft_split(char const *s, char c)
{
	int		col;
	int		len;
	int		i;
	char	**tab;

	if (!s)
		return (NULL);
	col = colcount(s, c);
	if (!(tab = (char **)malloc(sizeof(char *) * (col + 1))))
		return (NULL);
	i = 0;
	while (i < col)
	{
		if (!(len = splitlen(s, c)))
			break ;
		if (!(tab[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (free_all(tab, col + 1));
		while (*s == c)
			s++;
		ft_memcpy(tab[i], s, len);
		tab[i++][len] = '\0';
		s += len;
	}
	tab[i] = NULL;
	return (tab);
}
