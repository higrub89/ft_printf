/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 22:57:57 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/12 01:29:39 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int *i)
{
	write (1, &c, 1);
	(*i)++;
}
/*
#include <fcntl.h>
int	main(void)
{
	char	fd = open("text.txt", O_RDWR);
	char	c = 'A';
	ft_putchar_fd(c, fd);
	close(fd);
	return (0);
}*/
