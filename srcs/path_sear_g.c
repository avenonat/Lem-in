/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_sear_g.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 11:10:34 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/15 21:28:32 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		*path_sear_g(t_rooms *r, int n)
{
	int	i;
	int	j;
	int *t_p;

	j = 0;
	i = 0;
	t_p = minus_t_p(r->index_rooms);
	sear_g(r, n);
	while (i < r->index_rooms)
	{
		if (r->paths[r->start][i] && !(r->visited[n][i]))
		{
			r->prev[n][i] = r->start;
			if (i != r->end && (t_p[j++] = i) >= 0)
				r->visited[n][i] = 1;
			else
			{
				r->count_vihod++;
				r->distance++;
				break ;
			}
		}
		i++;
	}
	return (t_p);
}
