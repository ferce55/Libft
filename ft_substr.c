/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:11:22 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/08/08 20:44:44 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strtmp(char const *s)
{

}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	if (ft_strlen(s) < len)
		t = (char *)malloc(ft_strlen(s) + 1);
	else
		t = (char *)malloc(len + 1);
	if (!t)
		return (0);
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
		t[j++] = s[i++];
	t[j] = '\0';
	return (t);
}
