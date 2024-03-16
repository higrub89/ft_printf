/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:50:47 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/28 00:16:14 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
	{
		i++;
	}
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[10] ="42 ";
	char	src[30] = "";

	printf("Longitud del string 'dst': %zu\n", sizeof(dst));
	printf("Longitud del string 'src': %zu\n", sizeof(src));
	printf("CONCATENADA: %zu\n", ft_strlcat(dst, src, 10));
	printf("CONCATENADA: %s\n", dst);

	return (0);
}*/
