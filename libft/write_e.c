/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_e.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 15:18:03 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/15 15:18:03 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	write_e(int n)
{
	if (n)
	{
		write(2, "ERROR\n", 6);
		exit(0);
	}
}
