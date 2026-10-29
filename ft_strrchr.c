/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:05:27 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 15:05:28 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;
	char	*last;

	i = 0;
	last = NULL;
	while (src[i])
	{
		if (src[i] == (char)c)
			last = (char *)(src + i);
		i++;
	}
	if (src[i] == (char)c)
		return ((char *)(src + i));
	return (last);
}

/*
int	main(void)
{
	char	*res = ft_strrchr("hello world\n", 'o');

	if (res)
		write(1, res, ft_strlen(res));
	return (0);
}
*/
