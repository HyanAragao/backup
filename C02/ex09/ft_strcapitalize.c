/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:30:49 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/17 14:24:27 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i == 0 || str[i - 1] < 48 || str[i - 1] > 122)
			{
				str[i] = str[i] - 32;
			}
		}
		else if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i - 1] != ' ')
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
