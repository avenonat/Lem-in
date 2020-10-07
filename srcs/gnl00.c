/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 11:18:51 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/14 11:20:35 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		gnl00(char **line)
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
