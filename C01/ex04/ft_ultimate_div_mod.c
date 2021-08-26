/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 19:16:51 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/09 18:39:58 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
/*int main()
{
	int *a;
	int *b;
	int x = 23;
	int y = 10;

	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
}*/
