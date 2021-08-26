/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:17:24 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/16 19:28:50 by mburnet          ###   ########.fr       */
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
	x = 1;
	while (x < argc)
	{
		while (argv[x][i])
		{
			ft_putchar(argv[x][i]);
			i++;
		}
		i = 0;
		ft_putchar('\n');
		x++;
	}
}
