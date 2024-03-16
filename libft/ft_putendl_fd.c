/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:25:52 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/12 01:51:36 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, &fd);
	ft_putchar_fd('\n', &fd);
}
/*
#include <fcntl.h>
int main(void)
{
	int	fd = open("text.txt", O_RDWR);
	char	*str = "Bienvenidos!";
	ft_putendl_fd(str, fd);
	close(fd);
	return (0);
}*/
