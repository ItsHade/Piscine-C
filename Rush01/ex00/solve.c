/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:05:29 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/15 19:27:28 by bwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	valid(int **matrix, int i, int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row <= 4)
	{
		if (i == matrix[row][y])
			return (1);
		row++;
	}
	while (col <= 4)
	{
		if (i == matrix[x][col])
			return (1);
		col++;
	}
	return (0);
}

int	ft_norm_2(int **matrix, int x, int y)
{
	if (x == 4)
	{
		if (ft_solve(matrix, 1, y + 1))
			return (-1);
	}
	else
	{
		if (ft_solve(matrix, x + 1, y))
			return (-1);
	}
	return (0);
}

int	ft_norm(int **matrix, int x, int y, int i)
{
	if (x == 4 && y == 4)
	{
		if (ft_check_legal(matrix))
		{
			if (i >= 4)
			{
				matrix[x][y] = 0;
				return (1);
			}
			else
				return (-1);
		}
		else
			return (0);
	}
	return (ft_norm_2(matrix, x, y));
}

int	ft_solve(int **matrix, int x, int y)
{
	int	i;
	int	r;

	i = 1;
	while (1)
	{
		while (i <= 4 && valid(matrix, i, x, y))
			i++;
		if (i <= 4)
			matrix[x][y] = i;
		else
		{
			matrix[x][y] = 0;
			return (1);
		}
		r = ft_norm(matrix, x, y, i);
		if (r == -1)
			continue ;
		else
			return (r);
		return (0);
	}
}
