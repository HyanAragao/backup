/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:13:51 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/14 14:02:17 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("\"ABZ\": %i\n", ft_str_is_uppercase("ABZ"));
	printf("\"AB@\": %i\n", ft_str_is_uppercase("AB@"));
	printf("\"AB[\": %i\n", ft_str_is_uppercase("AB["));
	printf("\"\": %i\n", ft_str_is_uppercase(""));
	printf("\"DASFJET..\": %i\n", ft_str_is_uppercase("ADASFJET.."));
}
