/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 06:25:56 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/24 06:29:52 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Expected files : aff_first_param.c
// Allowed functions: write

// Write a program that takes strings as arguments, and displays its
// first argument followed by a \n. If the number of arguments is less
// than 1, the program displays \n.

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc > 1)
	{
		while (argv[1][i++])
		{
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
