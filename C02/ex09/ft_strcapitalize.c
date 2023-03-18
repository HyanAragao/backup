/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:30:49 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/18 04:13:38 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || str[i - 1] < '0' || str[i - 1] > 'z')
				str[i] = str[i] - 32;
			else if (i == 0 || (str[i - 1] > '9' && str[i - 1] < 'A'))
				str[i] = str[i] - 32;
			else if (i == 0 || (str[i - 1] > 'Z' && str[i - 1] < 'a'))
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] != ' ')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
