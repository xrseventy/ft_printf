
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new_list;

	if ((new_list = (t_list*)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_list->content_size = 0;
		new_list->content = NULL;
	}
	else
	{
		new_list->content_size = content_size;
		new_list->content = ft_memdup(content, content_size);
	}
	new_list->next = NULL;
	return (new_list);
}
