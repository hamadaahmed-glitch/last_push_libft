/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:55:40 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:55:41 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
int	main(void)
{
	if (ft_isprint(' '))
		write(1, "space is printable\n", 19);
	if (!ft_isprint('\n'))
		write(1, "newline is not printable\n", 25);
	return (0);
}
*/
