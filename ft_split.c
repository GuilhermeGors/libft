/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:47:05 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/11 20:44:41 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

static void	free_split(char **split, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		index;

	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!s || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (s[i])
	{
		if (s[i] != c && index == -1)
			index = i;
		if ((s[i] == c || s[i + 1] == '\0') && index != -1)
		{
			split[j] = ft_substr(s, index, i - index + (s[i] != c));
			if (!split[j++])
				return (free_split(split, j), NULL);
			index = -1;
		}
		i++;
	}
	return (split);
}

/*
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world this is a test", ' ');
	if (!result)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/