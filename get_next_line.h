/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhusler <qhusler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/05 19:43:52 by qhusler           #+#    #+#             */
/*   Updated: 2016/06/04 03:19:28 by qhusler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 21

# include "./libft/libft.h"
# include <fcntl.h>

typedef	struct		s_mfd
{
	int				fd;
	char			*s;
	void			*next;
	void			*bgn_lst;
}					t_mfd;

int					get_next_line(int const fd, char **line);

#endif
