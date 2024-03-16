/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 21:43:43 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 02:36:33 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (unsigned char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}
/*
int main(void)
{
	const char *str = "Bienvenidos";
	char buscar = 'f';
	char *result = ft_strchr(str, buscar);

	printf("String de Busqueda: %s\n", str);
	printf("Primera aparicion de la letra 'e': %s\n", result);
	return (0);
}*/
