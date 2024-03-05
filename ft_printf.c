/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 01:00:29 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/05 01:38:16 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_conver_format(va_list args, const char *s, int *i)
{
	void *ptr;

	if (s[0] == 'c')
	{
	}
}

int ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
}
