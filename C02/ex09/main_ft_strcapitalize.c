/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hguilher <hguilher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:18:33 by hguilher          #+#    #+#             */
/*   Updated: 2023/03/18 04:06:41 by hguilher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "sa/lut, comm;ent tu vas ? 42mo>ts quarante-deux; Cinquante+et+un";

	printf("%s", ft_strcapitalize(str));
}
