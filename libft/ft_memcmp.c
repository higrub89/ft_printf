/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:47:57 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 13:01:38 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return ((int)(unsigned char)p1[i] - (int)(unsigned char)p2[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main(void)
{
	const char	*a = "Bienvenidos a 42madrid";
	const char	*b = "Bienvenidos a cursus";
	int	cmp = ft_memcmp(a, b, 16);
	printf("result: %d\n", memcmp(a, b, 16));

	printf("El resultado es: %d\n", cmp);

	const int	A[5] = {1, 2, 3, 4, 5};
	const int	B[5] = {9, 8, 7, 6, 10};
	int	cmp2 = ft_memcmp(A, B, 4);
	printf("Comparacion de Array: %d\n", cmp2);
	printf("Comparacion de Array con Original: %d\n", memcmp(A, B, 4));
	return (0);
}*/
