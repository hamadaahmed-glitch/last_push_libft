/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-h-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:01:36 by hait-h-m          #+#    #+#             */
/*   Updated: 2026/10/27 15:01:38 by hait-h-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *str, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

void	free_all(char **array, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	**ft_helper(char const *s, char c, char **array)
{
	size_t	i;
	size_t	word;
	size_t	start;

	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			array[word] = ft_substr(s, start, i - start);
			if (!array[word])
				return (free_all(array, word), NULL);
			word++;
		}
	}
	array[word] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!array)
		return (NULL);
	return (ft_helper(s, c, array));
}

// int	main(void)
// {
// 	char	**arr = ft_split("hello,world,42", ',');
// 	int		i = 0;

// 	while (arr && arr[i])
// 	{
// 		write(1, arr[i], ft_strlen(arr[i]));
// 		write(1, "\n", 1);
// 		free(arr[i]);
// 		i++;
// 	}
// 	free(arr);
// 	return (0);
// }
