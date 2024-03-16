/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 23:50:42 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 02:21:58 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - ('a' - 'A');
	}
	return (c);
}
/*
int	main(void)
{
	char lowercase = 'f';
	char uppercase = ft_toupper(lowercase);

	printf("Caracter: %c\n", lowercase);
	printf("Caracter Convertido: %c\n", uppercase);
	return (0);
}*/
