/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:23:22 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/13 21:44:21 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_hexa_upper(unsigned long n, int *i)
{
	unsigned int	num;
	unsigned int	len_b;
	char			*base;

	num = (unsigned int)n;
	base = "0123456789ABCDEF";
	len_b = ft_strlen(base);
	if (num >= 16)
	{
		ft_hexa_upper(num / len_b, i);
	}
	ft_putchar_fd(*(base + (num % len_b)), i);
}

void	ft_hexa_low(unsigned long n, int *i)
{
	unsigned int	num;
	unsigned int	len_b;
	char			*base;

	num = (unsigned int)n;
	base = "0123456789abcdef";
	len_b = ft_strlen(base);
	if (num >= 16)
	{
		ft_hexa_low(num / len_b, i);
	}
	ft_putchar_fd(*(base + (num % len_b)), i);
}
/*
int main(void)
{
	int i = 0;
	unsigned long num = 255;
	
	printf("UPPERCASE: \n" );
	ft_hexa(num, &i, 1);
	printf("\n");	
	
	i = 0;
	printf("lowcase: \n" );
	ft_hexa(num, &i, 0);
	printf("\n");
	
	return (0);
}*/
