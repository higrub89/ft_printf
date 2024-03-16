/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 23:28:38 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 02:30:45 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i ;
	char			*ptr;

	uc = (unsigned char)c;
	i = 0;
	ptr = (char *)s;
	while (ptr[i])
		i++;
	while (i > 0)
	{
		if (ptr[i] == uc)
			return (&ptr[i]);
		i--;
	}
	if (ptr[i] == uc)
		return (&ptr[i]);
	return (NULL);
}
/*
int	main(void)
{
	const char *a = "Bienvenidos";
	char b = 'e';

	char *occurrense = ft_strrchr(a, b);

	printf("String donde estamos buscando 'e': %s\n", a);
	printf("Ultima aparicion Encontrada: %s\n", occurrense);
	return (0);
}*/
