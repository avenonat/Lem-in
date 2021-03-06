/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   devide_ants.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:20:39 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/13 13:42:58 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	devide_ants(t_rooms *r, int ants)
{
	int	i;
	int j;
	int a;
	int ap;

	prepare_div(r);
	a = ants;
	while (a)
	{
		i = -1;
		ap = r->ant_path[0] + r->length[0];
		j = 0;
		while (++i < r->count_vihod)
		{
			if (r->ant_path[i] + r->length[i] < ap)
			{
				j = i;
				ap = r->ant_path[i] + r->length[i];
			}
		}
		r->ant_path[j]++;
		a--;
	}
}
