/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 22:33:57 by rhiguita          #+#    #+#             */
/*   Updated: 2024/02/25 17:21:13 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	myfunc(unsigned int i, char *s)
{
	printf("Mi funcion por Dentro: Inice = %i y el string es %s\n", i, s);
}

int main(void)
{
	char	str[25] = "bienvenidos";	
	printf("%s\n", str);
	ft_striteri(str, myfunc);
	return (0);
}*/
