/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:29:02 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 17:59:14 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_percent(char const c, va_list param)
{
	int	count;

	count = 0;
	// if (!c)
	// 	return (0);
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
		count = ft_printhexa(va_arg(param, unsigned long long));
	else if (c == 'x')
		count = ft_printhexamin(va_arg(param, unsigned int));
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

/*int main(void)
{
	char	*ptr;

	ptr = "cccc";

	// ft_printf("%5%\n");
	// printf("%5%\n");
	// ft_printf("%c\n", 'h');

	// ft_printf("%x\n", -141);
	// ft_printf("%X\n", -141);
	// ft_printf("%p\n", ptr);
	// printf("%p\n", ptr);
		printf("%d\n", ft_printf("aaaa %c\n", 'a'));
		printf("%d\n", printf("aaaa %c\n", 'a'));

	return (0);
}*/
