/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:02:16 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/22 16:50:30 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_join(char **strs, char *sep, char *str, int sep_len)
{
	int	i;
	int	x;
	int	a;
	int	s;

	a = 0;
	x = 0;
	while (strs[a])
	{
		i = 0;
		while (strs[a][i])
		{
			str[x++] = strs[a][i];
			i++;
		}
		s = 0;
		while (s < sep_len && strs[a + 1] != NULL)
		{
			str[x++] = sep[s++];
			i++;
		}
		a++;
	}
	str[x] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		sep_len;

	sep_len = ft_strlen(sep);
	if (size == 0)
	{
		str = NULL;
		return (str);
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	str = ft_join(strs, sep, str, sep_len);
	return (str);
}
