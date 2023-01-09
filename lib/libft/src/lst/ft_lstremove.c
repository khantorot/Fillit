#include "libft.h"

static t_list	*remove(t_list *lst, void *ptr)
{
	t_list *temp;

	if (!lst)
		return (NULL);
	if (lst->content == ptr)
	{
		temp = lst->next;
		ft_memdel((void **)&lst);
		return (temp);
	}
	lst->next = remove(lst->next, ptr);
	return (lst);
}

/*
** Removes a single node from a linked list.
*/

void			ft_lstremove(t_list **lst, void *ptr)
{
	*lst = remove(*lst, ptr);
}
