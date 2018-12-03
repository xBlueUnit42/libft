/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:44:49 by abbesbes          #+#    #+#             */
/*   Updated: 2018/11/23 20:47:36 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lst_addlast(t_list **head, t_list *last)
{
	if (!last || !head)
		return ;
	if (!(*head)->next)
		(*head)->next = last;
	else
		ft_lst_addlast(&((*head)->next), last);
}
