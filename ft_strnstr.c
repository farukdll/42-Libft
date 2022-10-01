/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:35:22 by fpektas           #+#    #+#             */
/*   Updated: 2022/01/27 23:38:39 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>
//#include	<string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	b = 0;
	a = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && b < len)
	{
		a = 0;
		while (needle[a] && haystack[a] == needle[a] && a + b < len)
			a++;
		if (!needle[a])
			return ((char *)haystack);
		haystack++;
		b++;
	}
	return (0);
}
/*
int main()
{
	printf("%s", ft_strnstr("merhaba", "met", 5));
	return (0);
}
*/
