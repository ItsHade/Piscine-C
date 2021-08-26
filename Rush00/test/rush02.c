/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:08:42 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/07 16:33:55 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	top(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x-1)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	body(int x)
{
	int i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x-1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	rush(int x,int y)
{
	int i;

	i = 0;
	if (x > 0 && y > 0)
	{
		top(x);
		while (i < y-2)
		{	
			ft_putchar('\n');
			body(x);
			i++;
		}
		ft_putchar('\n');
	}
}
