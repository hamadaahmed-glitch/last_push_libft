/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:57:30 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:57:32 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	del_str(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node = ft_lstnew(ft_strdup("Node content\n"));

	ft_lstdelone(node, del_str);
	write(1, "Deleted node safely\n", 20);
	return (0);
}
*/
