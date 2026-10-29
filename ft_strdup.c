/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:02:18 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 15:02:19 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_memcpy(copy, s1, len + 1);
	return (copy);
}

/*
int	main(void)
{
	char	*dup = ft_strdup("hello world\n");

	if (dup)
	{
		write(1, dup, ft_strlen(dup));
		free(dup);
	}
	return (0);
}
*/
