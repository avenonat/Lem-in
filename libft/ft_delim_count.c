/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delim_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <lgarse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 12:22:36 by lgarse            #+#    #+#             */
/*   Updated: 2020/02/12 13:10:54 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_delim_count(char const *s, char delimiter)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i] == delimiter)
		i++;
	while (s[i])
	{
		if (s[i] != delimiter)
		{
			count++;
			while (s[i] != delimiter && s[i] != '\0')
				i++;
			continue ;
		}
		i++;
	}
	return (count);
}
