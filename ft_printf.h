/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:32:38 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/29 21:15:03 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printf(char const *str, ...);
int	ft_printchr(int c);
int	ft_printstr(char *s);
int	ft_printnbr(int n);
int	ft_printunbr(unsigned int n);
int	ft_printptr(void *c);
int	ft_printhexa(unsigned int c);
int	ft_printhexamin(unsigned int c);


#endif
