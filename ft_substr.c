/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsarri-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 11:11:22 by rsarri-c          #+#    #+#             */
/*   Updated: 2021/08/08 11:32:35 by rsarri-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	t = (char *)malloc(len + 1);
	if (!s || !t)
		return (0);
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
		t[j++] = s[i++];
	t[j] = '\0';
	retrun (t);
}
