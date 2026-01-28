/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:47:58 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/28 20:47:10 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	countwrite (int i)
{
	write (1, &i, 1);
	
	return (1);
}

int	ft_printptr(void *c)
{
	uintptr_t	l;
	char	*base;
	int	i;
	
	if (c == NULL)
		return (ft_printstr("(nil)"));
	l = (uintptr_t) c;
	i = 0;
	base = "0123456789ABCDEF";
	write (1, "0x", 2);
	i = 2;
	ft_printhexa(l);
	i += countwrite(l);
	return (i);
}
