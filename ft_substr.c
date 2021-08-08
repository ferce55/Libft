/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:11:22 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/08/08 21:06:40 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*t;
	size_t			i;
	size_t			j;
	size_t			size;

	if (!s)
		return (0);
	size = 0;
	i = start;
	while (size < len && s[i++])
		size++;
	t = (char *)malloc(size + 1);
	if (!t)
		return (0);
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
		t[j++] = s[i++];
	t[j] = '\0';
	return (t);
}
