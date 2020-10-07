/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:56:59 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/18 17:57:45 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		gnl(char **line)
{
	char	*c;
	int		gnl_ret;

	while ((gnl_ret = get_next_line(0, &c)))
	{
		if (gnl_ret == -1)
			exit(1);
		if (c[0] != '#' || ft_strequ("##start", c) ||
			ft_strequ("##end", c))
		{
			*line = c;
			ft_putstr(c);
			ft_putchar('\n');
			break ;
		}
		else
			ft_strdel(&c);
	}
	return (gnl_ret);
}
