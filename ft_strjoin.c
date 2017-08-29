/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:32:51 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 16:05:51 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	size_t			lens1;
	size_t			lens2;

	if (!s1 || !s2)
		return (NULL);
	lens2 = ft_strlen(s2);
	lens1 = ft_strlen(s1);
	str = ft_strnew(lens1 + lens2);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
