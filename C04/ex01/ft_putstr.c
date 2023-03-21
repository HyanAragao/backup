/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:28:12 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/21 00:22:50 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);

int main() {
	ft_putstr("");
	write(1, "--\n", 3);
	ft_putstr("hola!\n");
	char s1[10] = "asdfsfg";
	s1[3] = 11;
	ft_putstr(s1);
}