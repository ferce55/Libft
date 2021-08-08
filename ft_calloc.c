#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tsize;
	void	*dst;

	tsize = count * size;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
