/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 05:53:52 by wquenten          #+#    #+#             */
/*   Updated: 2021/01/23 06:20:44 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_skip_atoi(const char **format)
{
	int i;
	int sign;

	sign = 1;
	i = 0;
	if (**format == '+' || **format == '-')
	{
		if (**format == '-')
			sign = -1;
		(*format)++;
	}
	while (ft_isdigit(**format))
	{
		i = i * 10 + ft_ctod(**format);
		(*format)++;
	}
	return (i * sign);
}
