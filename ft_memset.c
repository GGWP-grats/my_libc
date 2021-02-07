/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:53:11 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:23:35 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;

	i = -1;
	p = s;
	while (++i < n)
		p[i] = (unsigned char)c;
	return (s);
}
