/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romgutie <romgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 00:35:12 by romgutie          #+#    #+#             */
/*   Updated: 2025/11/07 00:31:04 by romgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = (const unsigned char *)s;
	while (n > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
		n--;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
    char	s[] = "Hello World!";
    char	*res;

    res = ft_memchr(s, 'o', 12);
    printf("%c %ld\n", *res, res - s);
    res = ft_memchr(s, 'z', 12);
	if (res)
		printf("%c %ld\n", *res, res - s);
	else
		printf("bah pas trouvé");
    return (0);
}*/
