/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:58:16 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:58:18 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*
int	main(void)
{
	t_list	*head = ft_lstnew("First\n");
	t_list	*last;

	ft_lstadd_back(&head, ft_lstnew("Last\n"));
	last = ft_lstlast(head);
	if (last)
		write(1, (char *)last->content, ft_strlen((char *)last->content));
	free(head->next);
	free(head);
	return (0);
}
*/
