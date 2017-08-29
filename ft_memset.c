/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:43:39 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 15:58:11 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *castb;

	castb = (unsigned char*)b;
	while (len-- > 0)
	{
		*castb++ = (unsigned char)c;
	}
	return (b);
}
