/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wquenten <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 20:49:32 by wquenten          #+#    #+#             */
/*   Updated: 2021/02/06 20:49:57 by wquenten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (!lst)
		return ;
	if (*lst)
	{
		cur = *lst;
		while (cur->next)
			cur = cur->next;
		cur->next = new;
	}
	else
		*lst = new;
}
