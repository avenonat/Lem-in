/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_paths_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 15:46:31 by avenonat          #+#    #+#             */
/*   Updated: 2020/02/19 15:19:45 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		*find_paths_1(t_rooms *r, int *temp, int t, int n)
{
	int *temp2;

	while (r->count_vihod == t)
	{
		temp2 = path_search2_g(r, temp, t, n);
		ft_memdel((void **)&temp);
		temp = temp2;
		if (r->count_vihod == t && temp[0] == -1)
		{
			r->vihod = r->count_vihod;
			write_error((r->vihod == 0), r);
			break ;
		}
	}
	return (temp);
}
