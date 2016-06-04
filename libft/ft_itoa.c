/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 18:25:57 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/23 11:51:51 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n, int i)
{
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*s;
	int		sign;
	int		nlen;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign = (n < 0) ? 1 : 0;
	nlen = intlen(n, 0);
	if (!(s = (char*)malloc(sizeof(char) * (nlen + sign + 1))))
		return (NULL);
	s += (nlen + sign);
	*s = '\0';
	if (!n)
		*--s = '0';
	while (n != 0)
	{
		*--s = (n > 0) ? (n % 10) + '0' : ((-n) % 10) + '0';
		n /= 10;
	}
	if (sign == 1)
		*--s = '-';
	return (s);
}
