/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romgutie <romgutie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 01:16:26 by romgutie          #+#    #+#             */
/*   Updated: 2025/11/11 18:29:09 by romgutie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	const char *haystack = "Hello world";
	const char *needle1 = "world";
	const char *needle2 = "test";
	const char *needle3 = "";
	printf(" %s\n", ft_strnstr(haystack, needle1, 11));
	printf(" %s\n", ft_strnstr(haystack, needle2, 11));
	printf(" %s\n", ft_strnstr(haystack, needle3, 11));
	printf(" %s\n", ft_strnstr(haystack, needle1, 5));
	return 0;
}*/
