/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:58:18 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/08 14:34:07 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	int	n;

	n = -0;
	ft_is_negative(n);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else if (n >= 0)
	{
		write (1, "P", 1);
	}
}
