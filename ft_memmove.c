void	*ft_memmove(void *restrict d, const void *restrict s, size_t n)
{
	size_t i;

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
