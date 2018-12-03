/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 18:21:26 by abbesbes          #+#    #+#             */
/*   Updated: 2018/11/17 18:24:22 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lift.h>

size_t		ft_lstlen(t_list *head)
{
	if (!head)
		return (0);
	return (1 + ft_lstlen(head->next));
}
