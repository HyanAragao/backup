/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 21:26:27 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/18 01:41:50 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "Hello World!";
	int		result;

	result = ft_strncmp(str1, str2, 10);
	printf("%d\n", result);
	return (0);
}
