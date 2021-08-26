/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:46:59 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/09 17:45:03 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[size - i - 1];
		tab[size - 1 - i] = tab[i];
		tab[i] = swap;
		i++;
	}
}
/*int main()
{
	int tab[5];
	
	tab[0] = 6;
	tab[1] = 3;
	tab[2] = 9;
	tab[3] = 1;
	tab[4] = 9;
	ft_rev_int_tab(tab, 5);
}*/
