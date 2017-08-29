/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:41:21 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:16:44 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i != 0 && s[i] != (unsigned char)c)
	{
		i--;
	}
	if (s[i] == (unsigned char)c)
		return ((char*)s + i);
	return (NULL);
}
