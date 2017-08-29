/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:43:17 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 15:57:47 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*c_dst;
	char	*c_src;

	i = 0;
	c_dst = (char*)dst;
	c_src = (char*)src;
	if (c_src < c_dst)
	{
		while (len != 0)
		{
			len--;
			c_dst[len] = c_src[len];
		}
	}
	else
	{
		ft_memcpy(c_dst, c_src, len);
	}
	return (dst);
}
