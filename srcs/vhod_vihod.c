/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vhod_vihod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 13:46:49 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/19 18:42:22 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	vhod_vihod(t_rooms *r)
{
	int i;

	i = 0;
	while (i < r->index_rooms)
	{
		if (r->paths[r->start][i] && i != r->start)
			r->vhod++;
		if (r->paths[r->end][i] && i != r->end)
			r->vihod++;
		i++;
	}
	write_error((r->vihod == 0 || r->vhod == 0), r);
}
