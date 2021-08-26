/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 16:55:27 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/18 17:23:44 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int tmp;
	
	i = 0;
	while (i < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

int	main()
{
	int tab[5];

	tab[0] = 6;
	tab[1] = 3;
	tab[2] = 9;
	tab[3] = 1;
	tab[4] = 9;
	ft_rev_int_tab(tab, 5);
}
