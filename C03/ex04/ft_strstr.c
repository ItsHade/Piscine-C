/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:10:55 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/18 12:53:13 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	i;

	if (*to_find == 0)
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		i = 0;
		while (to_find[i] == str[a + i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (str + a);
			}
			i++;
		}
		a++;
	}
	return (0);
}
