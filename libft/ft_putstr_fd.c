/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:25:51 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/12 22:51:52 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int *len)
{
	int	i;

	i = 0;
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
		(*len)++;
	}
}
/*
#include <fcntl.h>
int main(void)
{
	int	fd = open("text.txt", O_RDWR);
	char	*s = "42 Madrid";
	ft_putstr_fd(s,fd);
	close(fd);
	return (0);
}*/
