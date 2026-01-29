/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:47:58 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 13:18:17 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr(void *c)
{
	unsigned long	l;
	char		*base;
	int	len;

	if (c == NULL)
		return (ft_printstr("(nil)"));
	l = (unsigned long)c;
	base = "0123456789ABCDEF";
	write(1, "0x", 2);
	len = ft_printhexa(l);
	return (len + 2);
}
