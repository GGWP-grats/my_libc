/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:55:53 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/07 05:12:03 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;

	if (!size)
		return (ft_strlen(src));
	i = -1;
	size--;
	while (++i < size && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
