/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_judge_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:54:03 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/29 17:35:48 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_judge_format(va_list data, const char format)
{
	int print_len;

	print_len = 0;
	if(format == 'c')
		print_len += ft_putchar(va_arg(data, int));
	if(format == 's')
		print_len += ft_putstr(va_arg(data, char *));
	// if(format == 'p')
	if(format == 'd')
		print_len += ft_putnbr(va_arg(data, int));
	if(format == 'i')
		print_len += ft_putnbr(va_arg(data, int));
	// if(format == 'u')
	// if(format == 'x')
	// if(format == 'X')
	if(format == '%')
		print_len += write(1, "%", 1);
	return (print_len);
}
