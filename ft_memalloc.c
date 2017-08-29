/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmlambo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 11:40:24 by nmlambo           #+#    #+#             */
/*   Updated: 2017/06/11 11:40:32 by nmlambo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *str;

	if (!(str = (void*)malloc(sizeof(void*) * size)))
		return (NULL);
	ft_bzero(str, size);
	return (str);
}
