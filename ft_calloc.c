/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:53:34 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 20:56:02 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)

{
	void	*ptr;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
int	main(void)
{
char	*arr = ft_calloc(5, sizeof(char));

if (arr && arr[0] == 0)
write(1, "Calloc memory zeroed\n", 21);
free(arr);
return (0);char    str[10] = "abcdefghi";

ft_bzero(NULL, 5);
write(1, str + 5, 4);
write(1, "\n", 1);
return (0);
}

}*/
