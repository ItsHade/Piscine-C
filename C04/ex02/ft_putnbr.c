/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:52:16 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/22 12:06:22 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_decomp(unsigned int u_nbr)
{
	if (u_nbr != 0)
	{
		ft_decomp(u_nbr / 10);
		ft_putchar(u_nbr % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	u_nbr;

	if (nb == 0)
		ft_putchar('0');
	else if (nb < 0)
	{
		ft_putchar('-');
		u_nbr = -nb;
		ft_decomp(u_nbr);
	}
	else
	{
		u_nbr = nb;
		ft_decomp(u_nbr);
	}
}
