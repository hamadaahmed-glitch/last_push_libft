/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:58:36 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:58:38 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, node);
		lst = lst->next;
	}
	return (nlst);
}

/*
static void	*dup_content(void *content)
{
	return (ft_strdup((char *)content));
}

static void	del_str(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head = ft_lstnew("A\n");
	t_list	*new_list;

	ft_lstadd_back(&head, ft_lstnew("B\n"));
	new_list = ft_lstmap(head, dup_content, del_str);
	if (new_list)
	{
		write(1, (char *)new_list->content, 2);
		ft_lstclear(&new_list, del_str);
	}
	free(head->next);
	free(head);
	return (0);
}
*/
