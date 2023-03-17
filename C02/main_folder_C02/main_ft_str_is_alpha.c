/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:12:25 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/14 13:58:27 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 122)
		{
			return (0);
		}
		else if (str[i] > 90 && str[i] < 97)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char	*str;

	str = "";
	printf("%i", ft_str_is_alpha(str));
}
