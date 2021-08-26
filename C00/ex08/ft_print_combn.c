/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:40:31 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/08 12:45:56 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_decompnbr()
{
	int i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + '0');
		i++;
}

void	ft_print_combn(int n)
{
	int i;
	int nb;
	
	i = 0;
	nb = n
	if (n > 0 && n < 10)
	{
		while (
		ft_ft_decompnbr(n);
	}
}

int	main(void)
{
	ft_print_combn(1);
}
