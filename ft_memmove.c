/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:09:28 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/08/08 11:15:03 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfft.h"

void	*ft_memmove(void *restrict d, const void *restrict s, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (((char *)d)[i] != '\0' && cont == n)
		{
			((char *)d)[i] = ((char *)s)[i];
			i++;
		}
	}
	return (d);
}
