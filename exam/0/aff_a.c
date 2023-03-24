/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 10:35:06 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/24 06:22:49 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Expected files : aff_a.c
// Allowed functions: write

// Write a program that takes a string, and displays the first 'a' character it
// encounters in it, followed by a newline. If there are no 'a' characters in
// the string, the program just writes a newline. If the number of parameters is
// not 1, the program displays 'a' followed by a newline.

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
		return (0);
	}
	write(1, "a\n", 2);
	return (0);
}
