/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:50:41 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/12 18:24:36 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
}

int	main(void)
{
	int	empty[0];
	int	test_even[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	test_odd[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

	ft_rev_int_tab(empty, 0);
	ft_rev_int_tab(test_even, 10);
	ft_rev_int_tab(test_odd, 11);
	print_array(empty, 0);
	print_array(test_even, 10);
	print_array(test_odd, 11);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	rev;

	rev = size;
	i = 0;
	while (i < size / 2)
	{
		ft_swap(&tab[i], &tab[rev - 1]);
		i++;
		rev--;
	}
}

void	ft_swap(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}
