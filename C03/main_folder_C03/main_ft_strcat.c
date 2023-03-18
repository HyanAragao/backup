/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 01:47:47 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/18 11:18:20 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[count] != '\0')
	{
		dest[i] = src[count];
		i++;
		count++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[12] = "Hello ";
	char	src[] = "World";

	printf("%s", ft_strcat(dest, src));
}
