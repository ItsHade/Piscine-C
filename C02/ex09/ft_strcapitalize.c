/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 14:40:18 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/17 16:12:39 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	maj;

	i = 0;
	maj = 1;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (maj && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!maj && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			maj = 0;
		}
		else
			maj = 1;
		i++;
	}
	return (str);
}
