/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:05:51 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 15:05:53 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_memchr(set, s1[start], ft_strlen(set)) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_memchr(set, s1[end - 1], ft_strlen(set)) != NULL)
		end--;
	trimmed = malloc(end - start + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_memcpy(trimmed, &s1[start], end - start);
	trimmed[end - start] = '\0';
	return (trimmed);
}

/*
int	main(void)
{
	char	*res = ft_strtrim("xxhello worldxx\n", "x");

	if (res)
	{
		write(1, res, ft_strlen(res));
		free(res);
	}
	return (0);
}
*/
