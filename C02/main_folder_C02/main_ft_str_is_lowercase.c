/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:13:26 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/14 14:01:25 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 97 || str[i] > 122)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("\"abz\": %i\n", ft_str_is_lowercase("abz"));
	printf("\"ab{\": %i\n", ft_str_is_lowercase("ab{"));
	printf("\"ab`\": %i\n", ft_str_is_lowercase("ab`"));
	printf("\"\": %i\n", ft_str_is_lowercase(""));
	printf("\"asdasda..\": %i\n", ft_str_is_lowercase("asdasda.."));
	printf("\"asdasAa\": %i\n", ft_str_is_lowercase("asdasAa"));
}
