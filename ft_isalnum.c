/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:53:57 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 14:54:00 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
int	main(void)
{
if (ft_isalnum('z'))
write(1, "z is alnum\n", 11);
if (!ft_isalnum('!'))
write(1, "! is not alnum\n", 15);
return (0);
}
*/
