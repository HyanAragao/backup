/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 02:50:52 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/08 14:31:41 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_putnbr(int nb)
{
	char	h;

	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		h = (nb % 10 + '0');
		write (1, &h, 1);
	}
	else if (nb >= 0 && nb <= 9)
	{
		h = (nb % 10 + '0');
		write (1, &h, 1);
	}
	else
	{
		write (1, "-", 1);
		ft_putnbr(nb * -1);
	}
}

int	main(void)
{
	ft_putnbr(110);
}
