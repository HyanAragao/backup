/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 11:37:01 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/18 11:37:06 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
