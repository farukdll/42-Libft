/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:24:19 by fpektas           #+#    #+#             */
/*   Updated: 2022/02/09 16:10:44 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

char	*ft_strtrim(char const *s1, const char *set)
{
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (0);
	start = 0;
	len = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[len] && ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, start, ++len - start));
}
/*
int main()
{
    printf("\n%s\n\n", ft_strtrim("asdqwezxcLeoasdqwezxc", "asdqwezxc"));
}
*/
