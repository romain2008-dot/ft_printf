/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romgutie <romgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 16:19:50 by romgutie          #+#    #+#             */
/*   Updated: 2025/12/09 23:37:40 by romgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_putchar(int c);
int	ft_putstr(const char *str);
int	ft_putptr(void *ptr);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);
int	ft_puthex(unsigned int n, int uppercase);
int	ft_printf(const char *format, ...);
int	ft_dispatch(char specifier, va_list args);

#endif
