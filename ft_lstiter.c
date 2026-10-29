/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:57:57 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:57:59 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
static void	print_content(void *content)
{
	char	*str = (char *)content;

	write(1, str, ft_strlen(str));
}

int	main(void)
{
	t_list	*head = ft_lstnew("First\n");

	ft_lstadd_back(&head, ft_lstnew("Second\n"));
	ft_lstiter(head, print_content);
	free(head->next);
	free(head);
	return (0);
}
*/
