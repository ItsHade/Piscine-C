/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   legal.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:04:19 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/15 19:26:02 by bwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_legal_up(int**matrix, int x)
{
	int	j;
	int	y;
	int	i;

	y = 1;
	j = 1;
	i = 1;
	while (y + i <= 4)
	{
		if (matrix[x][y] < matrix[x][y + i])
		{
			j++;
			y += i;
			i = 1;
		}
		else
			i++;
	}
	if (j == matrix[x][0])
		return (0);
	else
		return (1);
}

int	ft_legal_down(int**matrix, int x)
{
	int	j;
	int	y;
	int	i;

	y = 4;
	j = 1;
	i = 1;
	while (y - i >= 1)
	{
		if (matrix[x][y] < matrix[x][y - i])
		{
			j++;
			y -= i;
			i = 1;
		}
		else
			i++;
	}
	if (j == matrix[x][4 + 1])
		return (0);
	else
		return (1);
}

int	ft_legal_left(int**matrix, int y)
{
	int	j;
	int	x;
	int	i;

	x = 1;
	j = 1;
	i = 1;
	while (x + i <= 4)
	{
		if (matrix[x][y] < matrix[x + i][y])
		{
			j++;
			x += i;
			i = 1;
		}
		else
			i++;
	}
	if (j == matrix[0][y])
		return (0);
	else
		return (1);
}

int	ft_legal_right(int**matrix, int y)
{
	int	j;
	int	x;
	int	i;

	x = 4;
	j = 1;
	i = 1;
	while (x - i >= 1)
	{
		if (matrix[x][y] < matrix[x - i][y])
		{
			j++;
			x -= i;
			i = 1;
		}
		else
			i++;
	}
	if (j == matrix[4 + 1][y])
		return (0);
	else
		return (1);
}

int	ft_check_legal(int**matrix)
{
	int	i;

	i = 1;
	while (i <= 4)
	{
		if (ft_legal_up(matrix, i)
			|| ft_legal_down(matrix, i)
			|| ft_legal_left(matrix, i)
			|| ft_legal_right(matrix, i))
			return (1);
		i++;
	}
	return (0);
}
