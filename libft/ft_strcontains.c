/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontains.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:27:35 by abbesbes          #+#    #+#             */
/*   Updated: 2018/12/04 12:14:39 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strcontains(char *str, int c)
{
	if (!str || c == '\0')
		return (0);
	while (*str && *str != c)
		str++;
	if (*str)
		return (1);
	else
		return (0);
}
