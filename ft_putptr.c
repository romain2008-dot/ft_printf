/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romgutie <romgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 18:47:19 by romgutie          #+#    #+#             */
/*   Updated: 2025/12/12 13:41:41 by romgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_ptr(unsigned long long n)
{
	char	*base;
	int		count;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_puthex_ptr(n / 16);
	count += ft_putchar(base[n % 16]);
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long long	addr;
	int					count;

	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	addr = (unsigned long long)ptr;
	count = 0;
	count += ft_putstr("0x");
	if (addr == 0)
	{
		count += ft_putchar('0');
		return (count);
	}
	count += ft_puthex_ptr(addr);
	return (count);
}
