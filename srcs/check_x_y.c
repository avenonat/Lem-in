/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare_x_y.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avenonat <avenonat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:02:35 by avenonat          #+#    #+#             */
/*   Updated: 2020/02/19 19:04:51 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	check_x_y(t_rooms *r, char **s)
{
	int i;

	i = 0;
	while (s[1][i] && s[2][i])
	{
		if (ft_isdigit(s[1][i]) && ft_isdigit(s[2][i]))
			i++;
		else
		{
			free_split(s);
			write_error(1, r);
		}
	}
}
