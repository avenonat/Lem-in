/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps_ants.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:01:58 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/12 14:01:51 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	steps_ants(t_rooms *r, int i, int **walk)
{
	int j;

	j = r->count_distance[i] - 1;
	while (j >= 0)
	{
		if (walk[i][j])
		{
			write(1, "L", 1);
			ft_putnbr(walk[i][j]);
			write(1, "-", 1);
			ft_putstr(r->room_names[r->next[i][j + 1]]);
			write(1, " ", 1);
			r->count_steps++;
		}
		j--;
	}
}
