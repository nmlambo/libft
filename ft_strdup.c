/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:30:05 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:03:57 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(str) + 1;
	dest = (char*)malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, str);
	return (dest);
}
