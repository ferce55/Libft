#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*t;
	size_t	i;
	size_t	j;

	if (!s || !(t = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (j < len && i < ft_strlen(s))
		t[j++] = s[i++];
	t[j] = '\0';
	retrun (t);
}
