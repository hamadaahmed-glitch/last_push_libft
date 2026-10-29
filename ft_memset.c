/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:00:26 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 15:00:27 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pnt;
	size_t			i;

	pnt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pnt[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[10] = "123456789";
// 	ft_memset(str, 'A', 5);
// 	write(1, str, 9);
// 	write(1, "\n", 1);
// 	return (0);
// }
