/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 08:17:08 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/23 10:11:08 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int i;
	int k;
	int s;

	if (!*s2)
		return (char*)(s1);
	i = 0;
	while (s1[i] && n > 0)
	{
		if (n < ft_strlen(s2))
			return (NULL);
		k = 0;
		s = i;
		while (s1[s] == s2[k] && s2[k] && s1[s])
		{
			k++;
			s++;
		}
		if (s2[k] == '\0')
			return ((char *)s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
