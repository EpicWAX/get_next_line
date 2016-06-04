/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 14:15:21 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/27 07:15:11 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_dst;
	size_t	s_src;
	size_t	n_size;

	s_dst = ft_strnlen(dst, size);
	s_src = ft_strlen(src);
	n_size = size - s_dst;
	dst += s_dst;
	if (n_size > 0)
	{
		ft_strncpy(dst, src, n_size);
		dst[n_size - 1] = '\0';
	}
	return (s_dst + s_src);
}
