/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:57:53 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:21:27 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int lo;
	int i;

	lo = -1;
	i = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			lo = i;
	if (lo != -1)
		return ((char *)&s[lo]);
	return (c == 0 ? (char *)&s[i] : NULL);
}
