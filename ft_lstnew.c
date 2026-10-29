/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:58:53 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:58:56 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/*
int	main(void)
{
	t_list	*node = ft_lstnew("Node Content\n");

	if (node)
	{
		write(1, (char *)node->content, ft_strlen((char *)node->content));
		free(node);
	}
	return (0);
}
*/
