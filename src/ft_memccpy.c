/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:52:24 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:20:31 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dest, const void *src,\
						int c, size_t n)
{
	unsigned int		i;
	unsigned char		*d;
	const unsigned char *s;

	i = -1;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	dest = NULL;
	while (++i < n)
		if ((d[i] = s[i]) == (unsigned char)c\
				&& (dest = &d[++i]))
			break ;
	return (dest);
}
