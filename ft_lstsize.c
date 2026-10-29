/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:59:14 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:59:15 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
int	main(void)
{
	t_list	*head = ft_lstnew("1");

	ft_lstadd_front(&head, ft_lstnew("2"));
	if (ft_lstsize(head) == 2)
		write(1, "Size is 2\n", 10);
	free(head->next);
	free(head);
	return (0);
}
*/
