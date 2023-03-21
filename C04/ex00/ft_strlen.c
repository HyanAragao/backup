/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:27:57 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/21 00:23:27 by hguilher         ###   ########.fr       */
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

#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str);

int main() {
	char *s = "";
	printf("len of: '%s': %i\n", s, ft_strlen(s));
	s = "sggdsdsg";
	printf("len of: '%s': %i\n", s, ft_strlen(s));
	char s1[10] = "asdfsfg";
	s1[3] = 11;
	printf("len of: '%s': %i\n", s1, ft_strlen(s1));
}