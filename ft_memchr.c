/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:41:19 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 15:56:09 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cast;

	s_cast = (unsigned char*)s;
	while (n > 0)
	{
		if (*s_cast != (unsigned char)c)
			s_cast++;
		else
			return (s_cast);
		n--;
	}
	return (NULL);
}
