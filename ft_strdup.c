/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:54:34 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:22:59 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new;
	size_t	len;

	len = ft_strlen(str);
	if (!(new = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(new, (char *)str, len + 1);
	return (new);
}
