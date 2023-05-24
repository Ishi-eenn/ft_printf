/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_writestr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <syi378039@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 23:53:56 by tsishika          #+#    #+#             */
/*   Updated: 2023/05/24 23:56:26 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	char	buff;

	buff = (char)c;
	return (write(1, &buff, 1));
}

int	ft_putstr(char *str)
{
	size_t	len;

	if (str == NULL)
		return (write(1, "(null)", 6));
	len = 0;
	while (str[len] != '\0')
		len++;
	return (write(1, str, len));
}
