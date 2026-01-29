/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:47:58 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 12:15:44 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	countwrite(int i)
{
	write(1, &i, 1);
	return (1);
}

int	ft_printptr(void *c)
{
	unsigned long	l;
	char		*base;
	int			i;

	if (c == NULL)
		return (ft_printstr("(nil)"));
	l = (unsigned long)c;
	i = 0;
	base = "0123456789ABCDEF";
	write(1, "0x", 2);
	i = 2;
	ft_printhexa(l);
	i += countwrite(l);
	return (i);
}
