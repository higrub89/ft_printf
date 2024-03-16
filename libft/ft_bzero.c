/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:47:19 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/24 22:34:31 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}
/*
int	main(void)
{
	char	str[50] = "Bienvenidos a 42 Madrid";
	printf("Cadena Original: %s\n", str);

	size_t n = 5;

	ft_bzero(str, n);
	printf("Resultado: %s\n", str);
	printf("Desde la posicion '6': %s\n\n", &str[6]);

	int	numbers[10] = {9, 8, 7, 6, 5};

	size_t n2 = 3;
	ft_bzero(numbers, n2 * sizeof(int));

	size_t i;

	i = 0;
	while (i < 5)
	{
		printf("Resultado Array: %i\n", numbers[i]);
		++i;
	}
	return (0);
}*/
