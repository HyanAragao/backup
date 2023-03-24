/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 17:58:18 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/05 20:13:22 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_line1(int collumn, int x);
void	ft_final_line(int collumn, int x);
void	ft_in_the_middle(int collumn, int x);

void	rush(int x, int y)
{
	int	line;
	int	collumn;

	line = 1;
	while (line <= y)
	{
		collumn = 1;
		while (collumn <= x)
		{
			if (line == 1)
			{
				ft_line1(collumn, x);
			}
			else if (line == y)
			{
				ft_final_line(collumn, x);
			}
			else
			{
				ft_in_the_middle(collumn, x);
			}
			collumn++;
		}
		line++;
	}
}

void	ft_line1(int collumn, int x)
{
	char	a;
	char	b;
	char	c;

	a = 'A';
	b = 'B';
	c = 'C';
	if (collumn == 1)
	{
		ft_putchar(a);
		if (x == 1)
		{
			write(1, "\n", 1);
		}
	}
	else if (collumn == x)
	{
		ft_putchar(c);
		write(1, "\n", 1);
	}
	else
	{
		ft_putchar(b);
	}
}

void	ft_final_line(int collumn, int x)
{
	char	a;
	char	b;
	char	c;

	a = 'A';
	b = 'B';
	c = 'C';
	if (collumn == 1)
	{
		ft_putchar(a);
		if (x == 1)
		{
			write(1, "\n", 1);
		}
	}
	else if (collumn == x)
	{
		ft_putchar(c);
		write(1, "\n", 1);
	}
	else
	{
		ft_putchar(b);
	}
}

void	ft_in_the_middle(int collumn, int x)
{
	char	b;

	b = 'B';
	if (collumn == 1)
	{
		ft_putchar(b);
		if (x == 1)
		{
			write(1, "\n", 1);
		}
	}
	else if (collumn == x)
	{
		ft_putchar(b);
		write(1, "\n", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}
