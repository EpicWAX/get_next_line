/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 11:25:22 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/26 19:14:25 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_end(char *s, int i)
{
	if (s)
	{
		while (ft_isspace(s[i]) == 1)
			i++;
		if (s[i] == '\0')
			return (1);
	}
	return (0);
}

void			ft_epur_str(char *s)
{
	int i;

	i = 0;
	if (s[0] == '\0')
		return (ft_putchar('\n'));
	if (s)
		while (s[i])
		{
			while (ft_isspace(s[i]) != 0)
				i++;
			while (s[i] > 32 && s[i] < 127)
			{
				ft_putchar(s[i]);
				i++;
			}
			if (check_end(s, i) == 1)
				return (ft_putchar('\n'));
			else
				ft_putchar(' ');
		}
}
