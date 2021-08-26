/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:09:25 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/24 17:09:27 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_divide(char *str, char *charset)
{

}


char **ft_split(char *str, char *charset)
{
	int i;
	char *tab;

	i = 0;
	if (*str[i] == '\0')
	{
		tab[i] = NULL;
		return (tab);
	}
	tab = malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (tab == NULL)
		return (tab);

	return (tab);

}

