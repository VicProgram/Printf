/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:12:44 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 17:55:07 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa(unsigned long c)
{
	char	*base;
	int		len;

	base = "0123456789ABCDEF";
	len = 0;
	if (c >= 16)
		len += ft_printhexa(c / 16);
	len += ft_printchr(base[c % 16]);
	return (len);
}
