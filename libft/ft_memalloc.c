/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 16:38:22 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/21 03:19:47 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	int				i;
	unsigned char	*c;

	if (!(c = (unsigned char*)malloc(size)))
		return (NULL);
	i = -1;
	while (size--)
		c[++i] = 0;
	return ((void*)c);
}
