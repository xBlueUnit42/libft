/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:04:53 by abbesbes          #+#    #+#             */
/*   Updated: 2018/10/31 19:30:22 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ss;

	ss = (char*)s;
	i = -1;
	while (ss[++i])
		if (ss[i] == c)
			return (ss + i);
	if (c == '\0')
		return (ss + i);
	else
		return (NULL);
}
