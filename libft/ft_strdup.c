/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:02:45 by abbesbes          #+#    #+#             */
/*   Updated: 2018/11/25 17:21:37 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	int		s;

	s = 0;
	while (s1[s])
		s++;
	new_str = (char*)malloc((s + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	new_str[s] = '\0';
	while (--s > -1)
		new_str[s] = s1[s];
	return (new_str);
}
