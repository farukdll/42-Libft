/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpektas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 21:40:54 by fpektas           #+#    #+#             */
/*   Updated: 2022/02/09 16:04:00 by fpektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include    <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
	{
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}
/*
int	main()
{
	char src_1[] = "leonardo";
	char dst_1[] = "ninjakaplumbağalar";
	printf("%s\n",ft_memmove(dst_1, src_1, 3));
}
*/
