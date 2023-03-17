/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:43:01 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/12 15:43:02 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 123;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d\n", a, b, div, mod);
	a = -123;
	b = 15;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d %d %d\n", a, b, div, mod);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
