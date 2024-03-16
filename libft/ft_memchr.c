/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:44:37 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 04:37:44 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str = "Hello world!";
	char		target = 'w';

	const char *result = ft_memchr(str, (int)target, 13);
	printf("Encontrado: %c en la posicion %ld\n", target, result - str);
	return (0);
}*/
