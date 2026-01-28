/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:58:55 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/28 19:31:46 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" // CAMBIAR NOMBRE!

int	ft_printunbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		ft_printnbr(n / 10);
	i += ft_printchr((n % 10) + '0');
	return (i);
}
