/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:29:27 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/24 12:21:23 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 0;
	x = argc;
	while (x > 1)
	{
		while (argv[x - 1][i])
		{
			ft_putchar(argv[x - 1][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		x--;
	}
}
