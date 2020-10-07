/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 09:23:30 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/12 15:59:41 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	int				x;

	int				y;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
