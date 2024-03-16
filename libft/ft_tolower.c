/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 00:29:59 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 02:23:58 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + ('a' - 'A');
	}
	return (c);
}
/*
int	main(void)
{
	char uppercase = 'R';
	char lowercase = ft_tolower(uppercase);

	printf("Caracter Mayuscula: %c\n", uppercase);
	printf("Caracter Convertido: %c\n", lowercase);
	return (0);
}*/
