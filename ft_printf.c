/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:29:02 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/30 13:59:56 by vabad-ro         ###   ########.fr       */
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

/*int	xmain(void)
{
	char	*ptr;
	int		n;

	ptr = "cccc";
	// ft_printf("%5%\n");
	// printf("%5%\n");
	// ft_printf("%c\n", 'h');
	//	n = printf(" %x ", LONG_MAX);
	// printf("salida: %i\n", n);
	n = ft_printf(" %x ", LONG_MAX);
	printf("salida: %i\n", n);
	// printf("%d", printf(" %x ", LONG_MAX));
	// ft_printf("%X\n", -141);
	// ft_printf("%p\n", ptr);
	// printf("%p\n", ptr);
	// printf("%d\n", ft_printf("aaaa %c\n", 'a'));
	// printf("%d\n", printf("aaaa %c\n", 'a'));
	return (0);
}

int	main(void)
{
	printf("%d \n", ft_printf(" %c %c %c", '0', 0 , '1'));
	printf("%d \n", printf(" %c %c %c", '0', 0 , '1'));
	return(0);

}*/