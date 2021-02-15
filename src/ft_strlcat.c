/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:55:07 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:27:39 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	while (dst[i] && size--)
		i++;
	if (!dst[i] && size > 0)
	{
		dst += i;
		ret += i;
		i = -1;
		while (src[++i] && size-- > 1)
			dst[i] = src[i];
		dst[i] = '\0';
		return (ret + ft_strlen(src));
	}
	else
		return (i + ft_strlen(src));
}
