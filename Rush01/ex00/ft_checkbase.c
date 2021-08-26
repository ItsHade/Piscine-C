/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adumesny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 23:19:05 by adumesny          #+#    #+#             */
/*   Updated: 2021/08/15 19:54:37 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_solvable(char *str)
{
	if ((str[0] + str[8] > 98 && str[0] + str[8] < 102)
		&& (str[2] + str[10] > 98 && str[2] + str[10] < 102)
		&& (str[4] + str[12] > 98 && str[4] + str[12] < 102)
		&& (str[6] + str[14] > 98 && str[6] + str[14] < 102)
		&& (str[16] + str[24] > 98 && str[16] + str[24] < 102)
		&& (str[18] + str[26] > 98 && str[18] + str[26] < 102)
		&& (str[20] + str[28] > 98 && str[20] + str[28] < 102)
		&& (str[22] + str[30] > 98 && str[22] + str[30] < 102))
	{
		return (1);
	}
	else
		return (0);
}

int	ft_checkformat(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 31)
		return (0);
	i = 0;
	while (i < 32)
	{
		if (str[i] >= '1' && str[i] <= '4')
			i++;
		else
			return (0);
		if (str[i] == ' ' || str[i] == '\0')
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_checkbase(char *str)
{
	if (str[16] == '1' || str[0] == '1')
	{
		if (!(str[16] == '1' && str[0] == '1'))
			return (0);
	}
	else if (str[6] == '1' || str[24] == '1')
	{
		if (!(str[6] == '1' && str[24] == '1'))
			return (0);
	}
	else if (str[30] == '1' || str[14] == '1')
	{
		if (!(str[30] == '1' && str[14] == '1'))
			return (0);
	}
	else if (str[22] == '1' || str[8] == '1')
	{
		if (!(str[22] == '1' && str[8] == '1'))
			return (0);
	}
	return (1);
}
