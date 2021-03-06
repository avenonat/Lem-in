/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 15:42:19 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/20 20:06:32 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int		main(int ac, char **av)
{
	t_rooms	*rooms;
	int		ants;
	int		ant_end;

	ants = read_ants();
	rooms = init_rooms();
	if (ac == 2 && av[1][0] == 'b')
		rooms->flag_bonus = 1;
	else
		*av = NULL;
	read_rooms(rooms, ants);
	if (!rooms->paths)
		write_error(1, rooms);
	find_paths(rooms);
	devide_ants(rooms, ants);
	ant_end = walking_ants(rooms, ants);
	if (rooms->flag_bonus)
		bonus_print(rooms, ants, ant_end);
	free_room(rooms, 0);
	return (1);
}
