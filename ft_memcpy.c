/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 15:56:48 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 15:56:54 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*cdst;
	const char	*csrc;

	cdst = (char*)dst;
	csrc = (const char*)src;
	while (n != 0)
	{
		*cdst++ = *csrc++;
		n--;
	}
	return (dst);
}
