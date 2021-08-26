/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumesny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 21:27:17 by adumesny          #+#    #+#             */
/*   Updated: 2021/08/15 19:55:22 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printerror(void)
{
	write(1, "Error\n", 6);
}

void	ft_display_matrix(int **matrix)
{
	int		x;
	int		y;

	x = 1;
	while (x <= 4)
	{
		y = 1;
		while (y <= 4)
		{
			ft_putchar(matrix[x][y] + '0');
			if (y != 4)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

void	ft_remove_space(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while ((str[j - 1] && str[j]) || j == 0)
	{
		str[i] = str[j];
		i++;
		j += 2;
	}
	str[i] = '\0';
}

int	main(int ac, char **av)
{
	int	**matrix;

	if (ac == 2)
	{
		if ((ft_checkformat(av[1])) && (ft_is_solvable(av[1])
				&& (ft_checkbase(av[1]))))
		{
			ft_remove_space(av[1]);
			matrix = ft_create_matrix(av[1]);
			if (ft_solve(matrix, 1, 1))
			{
				ft_printerror();
				return (1);
			}
			else
				ft_display_matrix(matrix);
			free(matrix);
		}
		else
			ft_printerror();
	}
	else
		ft_printerror();
}
