/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:54:01 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/30 11:09:23 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	int		print_len;
	size_t	i;
	va_list	data;

	print_len = 0;
	i = 0;
	va_start(data, s);
	while(s[i] != '\0')
	{
		if(s[i] == '%')
		{
			print_len += ft_judge_format(data, s[i + 1]);
			i++;
		}
		else
			print_len += ft_putchar(s[i]);
		i++;
	}
	va_end(data);
	return (print_len);
}

#include <stdio.h>

int main(void){
	ft_printf("%c\n", 'A');
	ft_printf("%s\n", "Ishikawa");
	ft_printf("%d\n", 2147483647);
	ft_printf("%i\n", 1 + 1);

	// printf("aa%daa", i);
	return (0);
}
