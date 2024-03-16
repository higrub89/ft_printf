/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:37:45 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/12 01:38:38 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int *i)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", i);
		return ;
	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar_fd('-', i);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, i);
		n %= 10;
	}
	if (n != -2147483648)
		ft_putchar_fd(n % 10 + '0', i);
}
/*
#include <fcntl.h>
int	main(void)
{
	int	fd = open("text.txt", O_RDWR);
	int	num = 123;
	ft_putnbr_fd(num, fd);
	close(fd);
	return (0);
}*/
