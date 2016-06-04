/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 18:41:46 by qhusler           #+#    #+#             */
/*   Updated: 2016/03/23 12:40:02 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlst;
	void	*c;

	if (!(c = (void*)ft_memalloc(content_size)))
		return (NULL);
	if (content == NULL)
	{
		c = NULL;
		content_size = 0;
	}
	else
		c = ft_memcpy(c, content, content_size);
	if (!(newlst = (t_list*)malloc(sizeof(newlst) * content_size)))
		return (NULL);
	newlst->content = c;
	newlst->content_size = content_size;
	newlst->next = NULL;
	return (newlst);
}
