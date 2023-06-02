/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:54:01 by tsishika          #+#    #+#             */
/*   Updated: 2023/06/03 00:46:29 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

// int	ft_printf(const char *s, ...)
// {
// 	int		print_len;
// 	size_t	i;
// 	va_list	data;

// 	print_len = 0;
// 	i = 0;
// 	va_start(data, s);
// 	while(s[i] != '\0')
// 	{
// 		if(s[i] == '%')
// 		{
// 			print_len += ft_judge_format(data, s[i + 1]);
// 			i++;
// 		}
// 		else
// 			print_len += ft_putchar(s[i]);
// 		i++;
// 	}
// 	va_end(data);
// 	return (print_len);
// }

int	ft_printf(const char *str, ...)
{
	int		i;
	int		result_length;
	va_list	args;

	i = 0;
	result_length = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			result_length += ft_judge_format(args, str[i + 1]);
			i++;
		}
		else
			result_length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (result_length);
}


#include <stdio.h>

int main(void){
	char str[] = "Ishikawa";
	ft_printf("aaaa%c %c %c %c\n", 'A', 'B', 'C', 'D');
	ft_printf("%s\n", str);
	ft_printf("%p\n", &str[0]);
	// printf("%p\n", &str[0]);
	ft_printf("%d\n", 2147483647);
	ft_printf("%u\n", 4294967295);
	ft_printf("%i\n", 1 + 1);
	ft_printf("%x\n", 10);
	ft_printf("%X\n", 255);

	// printf("aa%daa", i);
	return (0);
}
