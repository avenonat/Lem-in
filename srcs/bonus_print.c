/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 10:03:32 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/14 10:36:10 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void	bonus_print(t_rooms *r, int ants, int ant_end)
{
	write(1, "Starting ", 9);
	ft_putnbr(ants);
	write(1, " ants\nFinishing ", 16);
	ft_putnbr(ant_end);
	write(1, " ants\n", 6);
	bonus_print2(r);
}
