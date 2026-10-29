/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:56:43 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:56:45 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*head = ft_lstnew("Second\n");

	ft_lstadd_front(&head, ft_lstnew("First\n"));
	write(1, (char *)head->content, ft_strlen((char *)head->content));
	free(head->next);
	free(head);
	return (0);
}
*/
