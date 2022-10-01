/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:20:49 by fpektas           #+#    #+#             */
/*   Updated: 2022/02/09 16:10:25 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			a = (char *)s;
		++s;
	}
	if (!c)
		a = ((char *)s);
	return (a);
}
/*
int	main()
{
	char str[] = "leonardo";
	printf("%s", ft_strrchr(str, 'd'));
}
*/
