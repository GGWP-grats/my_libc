/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:57:28 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:22:35 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (*big && len)
	{
		while (little[i] && big[i] == little[i] && (len - i) > 0)
			i++;
		if (!little[i])
			return ((char *)big);
		i = 0;
		big++;
		len--;
	}
	return (NULL);
}
