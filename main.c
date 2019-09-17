/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasomayi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:20:13 by jasomayi          #+#    #+#             */
/*   Updated: 2019/06/20 19:35:36 by jasomayi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fillit.h"

int		main(int ac, char **av)
{
	char	**tetris;
	char	*map;
	int		i;

	if (ac != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	if ((tetris = ft_parsing(av)) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	i = 2;
	map = NULL;
	map = ft_create_map(i, map);
	while ((ft_fillit(tetris, map, 0, 0)) < 0)
	{
		i++;
		free(map);
		map = ft_create_map(i, map);
	}
	ft_tabdel(tetris, map);
	return (0);
}
