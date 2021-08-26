/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:13:10 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/22 12:36:40 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	x;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 32 || base[i] > 126)
			return (0);
		x = i + 1;
		while (base[x] != '\0')
		{
			if (base[i] == base[x])
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	u_nbr;

	len = ft_strlen(base);
	if (ft_base_check(base) && len > 1)
	{
		if (nbr < 0)
		{
			u_nbr = -1 * nbr;
			write(1, "-", 1);
		}
		else
			u_nbr = nbr;
		if (u_nbr >= len)
		{
			ft_putnbr_base(u_nbr / len, base);
			ft_putnbr_base(u_nbr % len, base);
		}
		else
			write(1, base + u_nbr, 1);
	}
}
