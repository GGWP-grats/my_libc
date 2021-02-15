/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 21:03:53 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 22:52:40 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char *s;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (s < d && &s[n] >= d)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy(d, s, n);
	return (dest);
}
