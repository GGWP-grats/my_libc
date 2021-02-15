/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 21:00:43 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:00:44 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_substr(char const *s, unsigned int start,\
			size_t len)
{
	int		i;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	if (ft_strlen(s) < start || !(new = malloc(sizeof(char) * (len + 1))))
		return (ft_strdup(""));
	while (s[start] && len--)
		new[i++] = s[start++];
	new[i] = '\0';
	return (new);
}
