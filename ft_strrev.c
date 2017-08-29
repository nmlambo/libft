/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:41:47 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:17:22 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	revstr;

	i = 0;
	length = ft_strlen(str);
	while (length - 1 > i)
	{
		revstr = str[i];
		str[i] = str[length - 1];
		str[length - 1] = revstr;
		length--;
		i++;
	}
	return (str);
}
