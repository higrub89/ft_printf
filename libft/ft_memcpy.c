/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:22:32 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/24 22:45:20 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (!dest && !src)
	{
		return (NULL);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char *src = "Bienvenidos a 42Madrid";
	char dest[11];

	ft_memcpy(dest, src, 10);
	//dest[10] = '\0'; 

	printf("Cadena copiada: %s\n", sizeof(est));

	int	*srcs = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	dst[8];

	ft_memcpy(dest, src, 9);
	printf("Desbordamiento de BUFER: %i\n", dst[]);

	return (0);
}*/
