/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:28:54 by qhusler           #+#    #+#             */
/*   Updated: 2016/01/21 00:20:37 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *l;

	if (!lst)
		return (NULL);
	if (!lst->next)
		return (f(lst));
	l = ft_lstmap(lst->next, f);
	ft_lstadd(&l, f(lst));
	return (l);
}
