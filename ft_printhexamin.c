/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexamin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:54:30 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/28 20:47:42 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printhexamin(unsigned int c)
{
	char	*base;
	
	base = "0123456789abcdef";
	if (c >= 16)
		ft_printhexa(c / 16);
	write (1, &base[c % 16], 1);
	return (1);
}