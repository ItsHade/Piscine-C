/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburnet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:18:53 by mburnet           #+#    #+#             */
/*   Updated: 2021/08/12 14:27:09 by mburnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	x = 0;
	i = 0;
	while (dest[x])
		x++;
	while (src[i] && i < nb)
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

	rt = ft_strncat(dest, src, 3);
	printf("%s\n", rt);
}*/
