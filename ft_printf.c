/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhiguita <rhiguita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:54:07 by rhiguita          #+#    #+#             */
/*   Updated: 2024/03/14 23:38:49 by rhiguita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_converformat(va_list arg, const char *s, int *i)
{
	void	*ptr;

	if (s[0] == 'c')
		ft_putchar_fd(va_arg(arg, int), i);
	else if (s[0] == 's')
		ft_putstr_fd(va_arg(arg, char *), i);
	else if (s[0] == 'p')
	{
		ptr = va_arg(arg, void *);
		if (ptr)
			ft_ptr(ptr, i);
		else
			ft_putstr_fd("0x0", i);
	}
	else if (s[0] == 'd' || s[0] == 'i')
		ft_putnbr_fd(va_arg(arg, unsigned int), i);
	else if (s[0] == 'u')
		ft_uputnbr(va_arg(arg, unsigned int), i);
	else if (s[0] == 'x')
		ft_hexa_low(va_arg(arg, unsigned long), i);
	else if (s[0] == 'X')
		ft_hexa_upper(va_arg(arg, unsigned long), i);
	else if (s[0] == '%')
		ft_putchar_fd('%', i);
}

int	ft_printf(const char *str, ...)
{
	va_list	variadic;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(variadic, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_converformat(variadic, str + i, &len);
		}
		else
			ft_putchar_fd(str[i], &len);
		i++;
	}
	va_end(variadic);
	return (len);
}
/*
int main(void)
{
	char	c = 'A';
	char *s  = "Ruben";
	int	num = 12345;
	int dec = 98765;
	int neg = -43;
	int	hexa = 255;

	ft_printf("Mi printf: %c\n", c);
	printf("Verdadero printf: %c\n\n", c);

	ft_printf("%s\n", s);
	printf("%s\n\n", s);

	ft_printf("Mi printf: %p\n", &c);
	printf("Verdadero printf: %p\n\n", &c);

	ft_printf("Mi printf: %i\n", num);
	printf("Verdadero printf: %i\n\n", num);

	ft_printf("Mi printf: %d\n", dec);
	printf("Verdadero printf: %d\n\n", dec);

	ft_printf("Mi printf: %u\n", neg);
	printf("Verdadero printf: %u\n\n", neg);

	ft_printf("Mi printf: %x\n", hexa);
	printf("Verdadero printf: %x\n\n", hexa);

	ft_printf("Mi printf: %X\n", hexa);
	printf("Verdadero printf: %X\n\n", hexa);

	ft_printf("Mi printf: %%\n");
	printf("Verdadero printf: %%\n");
	ft_printf("\001\002\007\v\010\f\r\n");
	return (0);
}*/
