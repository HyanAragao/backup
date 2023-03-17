/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:17:18 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/07 15:22:51 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	char	c;

	c = '1';
	ft_putchar(c);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
