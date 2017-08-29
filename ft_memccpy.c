/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:40:56 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 15:55:50 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*csrc;
	unsigned char		*cdst;
	size_t				i;

	i = 0;
	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
