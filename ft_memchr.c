/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:52:41 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:20:24 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *src;
	unsigned int		i;

	i = -1;
	src = s;
	while (++i < n)
		if (src[i] == (unsigned char)c)
			return ((void *)&src[i]);
	return (NULL);
}
