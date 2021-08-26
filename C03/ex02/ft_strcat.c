/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:11:04 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/12 14:18:03 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (dest[x])
		x++;
	while (src[i])
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
/*int main()
{
	char dest[6] = "hello";
	char src[6] = "yooop";
	char *rt;

	rt = ft_strcat(dest, src);
	printf("%s\n", rt);
}*/
