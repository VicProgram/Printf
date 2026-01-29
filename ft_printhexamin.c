/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:54:30 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 21:14:47 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexamin(unsigned int c)
{
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = 0;
	if (c >= 16)
		len += ft_printhexamin(c / 16);
	len += ft_printchr(base[c % 16]);
	return (len);
}
