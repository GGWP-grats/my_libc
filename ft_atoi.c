/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:38:24 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 21:23:18 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *nptr)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	while (*nptr == ' ' || (*nptr >= 7 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		sign = *(nptr++) == '-' ? -1 : 1;
	while (ft_isdigit(*nptr))
	{
		num = num * 10 + *nptr - '0';
		nptr++;
	}
	if (num * sign > 2147483647 || num * sign < -2147483648)
		return (sign > 0 ? -1 : 0);
	return (sign * (int)num);
}
