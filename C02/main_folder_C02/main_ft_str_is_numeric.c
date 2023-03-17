/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:12:58 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/14 13:47:36 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("\"123\": %i\n", ft_str_is_numeric("123"));
	printf("\"\": %i\n", ft_str_is_numeric(""));
	printf("\"1234567a89\": %i\n", ft_str_is_numeric("1234567a89"));
}
