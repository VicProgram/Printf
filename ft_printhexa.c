/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:12:44 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 13:12:49 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	lenhexa(unsigned int n)
{
	int	cnt;

	cnt = 1;
	while (n >= 16)
	{
		cnt++;
		n = n / 16;
	}
	return (cnt);
}

int	ft_printhexa(unsigned int c)
{
	char	*base;
	int		result;

	base = "0123456789ABCDEF";
	result = lenhexa(c);
	if (c >= 16)
		ft_printhexa(c / 16);
	write(1, &base[c % 16], 1);
	return (result);
}
