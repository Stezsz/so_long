/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ecp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 12:18:17 by strodrig          #+#    #+#             */
/*   Updated: 2024/12/05 12:18:17 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	count_ecp(t_program game, int *e, int *c, int *p)
{
	int	i;
	int	j;

	i = 0;
	while (game.map.map[i])
	{
		j = 0;
		while (game.map.map[i][j])
		{
			if (game.map.map[i][j] == 'E')
				(*e)++;
			else if (game.map.map[i][j] == 'C')
				(*c)++;
			else if (game.map.map[i][j] == 'P')
				(*p)++;
			j++;
		}
		i++;
	}
}

int	check_ecp(t_program game)
{
	int	e;
	int	c;
	int	p;

	e = 0;
	c = 0;
	p = 0;
	count_ecp(game, &e, &c, &p);
	return (e == 1 && c > 0 && p == 1);
}
