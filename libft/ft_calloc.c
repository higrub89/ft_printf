/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:20:10 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 13:50:07 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (NULL);
	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	ft_bzero(p, (count * size));
	return (p);
}
/*
int	main(void)
{
	size_t	count = 10;
	size_t	size = sizeof(int);
	int	*vec = (int *)ft_calloc(count, size);
	int	*vec2 = (int *)calloc(count, size);
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("Resultado1: [%d]=%d\n", i, vec[i]);
		i++;
	}

	printf("Resultado2: %d\n", *vec2);
	return (0);
}*/
