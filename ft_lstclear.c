/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:57:06 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:57:08 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}

/*
static void	del_str(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*head = ft_lstnew(ft_strdup("1\n"));

	ft_lstadd_back(&head, ft_lstnew(ft_strdup("2\n")));
	ft_lstclear(&head, del_str);
	if (!head)
		write(1, "List cleared completely\n", 24);
	return (0);
}
*/
