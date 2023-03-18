/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:36:00 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/18 16:36:04 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	str_len;
	int	to_find_len;

	str_len = ft_strlen(str);
	to_find_len = ft_strlen(to_find);
	i = 0;
	while (i <= str_len - to_find_len)
	{
		j = 0;
		while (j < to_find_len && str[i + j] == to_find[j])
		{
			j++;
		}
		if (j == to_find_len)
		{
			return (&str[i]);
		}
		i++;
	}
	return (0);
}
