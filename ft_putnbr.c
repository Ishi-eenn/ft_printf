/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsishika <tsishika@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 16:47:37 by tsishika          #+#    #+#             */
/*   Updated: 2023/06/03 01:25:05 by tsishika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(int n)
{
	int		len;
	long	buff_n;

	buff_n = n;
	len = 0;
	if (0 >= n)
	{
		buff_n *= -1;
		len++;
	}
	while (buff_n > 0)
	{
		buff_n /= 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (ft_intlen(nb));
}

int	ft_putunbr(unsigned int nb)
{
	unsigned int	n;

	n = nb;
	if (n >= 10)
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
	}
	else
		ft_putchar(n + '0');
	return (ft_intlen(nb));
}
