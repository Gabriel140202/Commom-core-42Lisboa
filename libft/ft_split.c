/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:16:18 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/19 13:22:38 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	total_words(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
			words++;
		i++;
	}
	if (s[i - 1] != c)
		words += 1;
	printf("%d\n", words);
	return (words);
}

void	write_string(char const *s, char c, char **string)
{
	int		i;
	int		start;

	i = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i - 1] != c)
		{
			if (i - start != 0)
			{
				*string = ft_substr(s, start, i - start);
				string++;
			}
			start = i + 1;
		}
		else if (s[i] == c && s[i - 1] == c)
			start++;
		i++;
	}
	if (s[i - 1] != c)
			*string = ft_substr(s, start, i - start);
	if (s[i - 1] != c)
			string++;
	*string = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**string;

	if (!s)
		return (NULL);
	if (s[0] == '\0')
	{
		string = (char **)malloc(sizeof(char *) + 1);
		string[0] = NULL;
		return (string);
	}
	string = (char **)malloc((total_words(s, c) + 1) * sizeof(char *));
	write_string (s, c, string);
	return (string);
}

int	main(void)
{
	char	**fruits = ft_split("  tripouille  42  ", ' ');
	for (int i = 0; fruits[i] != NULL; i++)
    	printf("%s\n", fruits[i]);
}
