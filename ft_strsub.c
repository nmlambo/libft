/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:46:45 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:18:52 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	count;

	if (!s)
		return (NULL);
	count = 0;
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	while (count < len)
	{
		str[count] = s[start + count];
		count++;
	}
	return (str);
}
