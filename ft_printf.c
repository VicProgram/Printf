/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:29:02 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/30 14:13:20 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_percent(char const c, va_list param)
{
	int	count;

	count = 0;
	if (c == '%')
		count = ft_printchr('%');
	else if (c == 'c')
		count = ft_printchr(va_arg(param, int));
	else if (c == 's')
		count = ft_printstr(va_arg(param, char *));
	else if (c == 'i' || c == 'd')
		count = ft_printnbr(va_arg(param, int));
	else if (c == 'u')
		count = ft_printunbr(va_arg(param, unsigned int));
	else if (c == 'p')
		count = ft_printptr(va_arg(param, void *));
	else if (c == 'X')
		count = ft_printhexa(va_arg(param, unsigned int), "0123456789ABCDEF");
	else if (c == 'x')
		count = ft_printhexa(va_arg(param, unsigned int), "0123456789abcdef");
	return (count);
}

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	param;

	va_start(param, str);
	count = 0;
	while (*str)
	{
		if (*str && *str != '%')
		{
			write(1, str, 1);
			count++;
			str++;
		}
		else if (*str != '\0' && *str == '%')
		{
			str++;
			count += is_percent(*str, param);
			str++;
		}
	}
	va_end(param);
	return (count);
}
