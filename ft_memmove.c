/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:09:28 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/08/08 13:06:06 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *restrict d, const void *restrict s, size_t n)
{
	size_t	i;

	if (!d && !s)
		return (0);
	i = 0;
	if ((size_t)d - (size_t)s < n)
	{
		i = n - 1;
		while (1 >= 0 && i < n)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)d)[i] = ((unsigned char *)s)[i];
			i++;
		}
	}
	return (d);
}
