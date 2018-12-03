/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:32:17 by abbesbes          #+#    #+#             */
/*   Updated: 2018/11/20 22:28:40 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		offset;

	if (!s1 || !s2)
		return (NULL);
	if (!(join = ft_strnew(ft_strlen((char*)s1) + ft_strlen((char*)s2))))
		return (NULL);
	offset = 0;
	i = 0;
	while (s1[i])
		join[offset++] = s1[i++];
	i = 0;
	while (s2[i])
		join[offset++] = s2[i++];
	return (join);
}
