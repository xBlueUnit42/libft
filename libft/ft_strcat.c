/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abbesbes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:04:02 by abbesbes          #+#    #+#             */
/*   Updated: 2018/11/21 21:53:07 by abbesbes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int l;
	int i;

	l = -1;
	while (s1[++l])
		;
	i = -1;
	while (s2[++i])
		s1[l + i] = s2[i];
	s1[l + i] = '\0';
	return (s1);
}
