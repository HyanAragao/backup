/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:48:36 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/12 13:48:37 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	ft_swap(&a, &b);
	printf("%i%i", a, b);
}

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}
