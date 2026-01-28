/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 16:29:02 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/28 19:31:45 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_is_percent(char const c, int count, va_list param)
{
	if (c == '%')
	{
		write(1, "%%", 1);
		count++;
	}
	else if (c == 'c')
		ft_printchr(va_arg(param, int));
	else if (c == 's')
		count += ft_printstr(va_arg(param, char *));	
	else if (c == 'i' || c == 'd')
		count += ft_printnbr(va_arg(param, int));
	else if (c == 'u')
		count += ft_printunbr(va_arg(param, unsigned int));
	else if (c == 'p')
	 	count += ft_printptr(va_arg(param, void *));
	else if (c == 'X')
		count += ft_printhexa(va_arg(param, int));
	else if (c == 'x')
		count += ft_printhexamin(va_arg(param, int));
	return (count);
}

int	ft_printf(char const *str, ...)
{
    int i;
	int	count;
	va_list	param;

	va_start(param, str);		
	count = 0;
    i = 0;
    while (str[i])
    {
		while ( str[i] && str[i] != '%')
		{
			write (1, &str[i], 1);
			i++;
			count++;
		}
		if (str[i] == '%' && str[i + 1] != '\0')	
		{
			count = ft_is_percent(str[++i], count, param);
			i++;
		}
	}
	va_end(param);
	return (count);
}

	
int main(void)
{
	char	*ptr;

	ptr = NULL;
    //ft_printf("%c", 'h');
	
	// ft_printf("%x", -141);
	// ft_printf("%X", -141);
	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);
	printf("%d\n", ft_printf("%p\n", ptr));
	printf("%d\n", printf("%p\n", ptr));
	
    // printf("Hola %s%s y mide %li", "adios como estamos este pito es increiblemente largo", " luis", -2147483649);
	//printf("%d", ft_printf("Hola %s%s y mide %d counter = ", "adios como estamos este pito es increiblemente largo", " luis", -258));
    return (0);
}
