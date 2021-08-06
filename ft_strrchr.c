/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:18:46 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/08/06 19:51:30 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*revs;

	i = ft_strlen(s);
	revs = (s + i);
	while (*s != *revs && c != *revs)
		revs--;
	if (c == *revs)
		return ((char *)s);
	return (0);
}
