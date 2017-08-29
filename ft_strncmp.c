/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:39:09 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:12:44 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ds1;
	unsigned char	*ds2;

	i = 0;
	ds1 = (unsigned char*)s1;
	ds2 = (unsigned char*)s2;
	while (ds1[i] != '\0' && ds2[i] != '\0' && i < n)
	{
		if (ds1[i] != ds2[i])
			return (ds1[i] - ds2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return (ds1[i] - ds2[i]);
}
