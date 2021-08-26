/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:03:33 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/15 19:23:58 by bwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	ft_fill_matrix(int **matrix, char *settings)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (++i <= 4 && ++j < 4)
		matrix[0][i] = settings[j] - '0';
	i = 0;
	while (++i <= 4 && ++j < 8)
		matrix[4 + 1][i] = settings[j] - '0';
	i = 0;
	while (++i <= 4 && ++j < 12)
		matrix[i][0] = settings[j] - '0';
	i = 0;
	while (++i <= 4 && ++j < 16)
		matrix[i][4 + 1] = settings[j] - '0';
}

int	**ft_create_matrix(char *settings)
{
	int		i;
	int		j;
	int		**matrix;

	matrix = (int **)malloc(sizeof(int *) * 4 + 2);
	if (matrix == 0)
		return (matrix);
	i = 0;
	while (i < 4 + 2)
	{
		matrix[i] = (int *)malloc(sizeof(int) * 4 + 2);
		i++;
	}
	i = 0;
	while (i < 4 + 2)
	{
		j = -1;
		while (++j < 4 + 2)
			matrix[i][j] = 0;
		i++;
	}
	ft_fill_matrix(matrix, settings);
	return (matrix);
}
