/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:21:04 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/08 14:36:52 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int n1, int n2);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}

void	ft_print(int n1, int n2)
{
	char	h;
	char	y;
	char	a;
	char	n;

	h = (n1 / 10 + '0');
	y = (n1 % 10 + '0');
	a = (n2 / 10 + '0');
	n = (n2 % 10 + '0');
	write(1, &h, 1);
	write(1, &y, 1);
	write(1, " ", 1);
	write(1, &a, 1);
	write(1, &n, 1);
	if (n1 != 98)
	{
		write(1, ", ", 2);
	}
}
