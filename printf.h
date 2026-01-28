/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:32:38 by vabad-ro          #+#    #+#             */
/*   Updated: 2026/01/28 19:31:47 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

int	ft_printchr(char c);
int	ft_is_percent(char const c, int count, va_list param);
int	ft_printstr(char *s);
int	ft_printnbr(int n);
int	ft_printunbr(unsigned int n);
int	ft_printptr(void *c);
int	ft_printhexa(unsigned int c);
int	ft_printhexamin(unsigned int c);


#endif
