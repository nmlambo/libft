/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:40:54 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:16:18 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	if (little[i] == '\0' && big[i] == '\0')
		return ((char*)big);
	while (big[i])
	{
		j = i;
		k = 0;
		if (little[k] == '\0')
			return ((char*)big + i);
		while (big[j] && little[k] && big[j] == little[k] && j < len)
		{
			k++;
			j++;
			if (little[k] == '\0')
				return ((char*)big + i);
		}
		i++;
	}
	return (0);
}
