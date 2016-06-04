/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:36:15 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/23 10:42:55 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*new_s;

	if (!s || !f || !(new_s = ft_strdup(s)))
		return (NULL);
	i = -1;
	while (new_s[++i])
		new_s[i] = f(new_s[i]);
	new_s[i] = '\0';
	return (new_s);
}
