/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romgutie <romgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 00:56:59 by romgutie          #+#    #+#             */
/*   Updated: 2025/11/07 00:56:59 by romgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d1;
	const unsigned char	*d2;

	d1 = (const unsigned char *)s1;
	d2 = (const unsigned char *)s2;
	while (n > 0)
	{
		if (*d1 != *d2)
			return (*d1 - *d2);
		d1++;
		d2++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    char str3[] = "Hello, World!";

    printf("%d\n", ft_memcmp(str1, str2, 13));
    printf("%d\n", ft_memcmp(str1, str3, 13));
    return (0);
}*/
