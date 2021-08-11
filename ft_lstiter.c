#include "libft.h"

void	ft_lstiter(t_lst *lst, void (*f)(void *))
{
	t_list aux;

	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
