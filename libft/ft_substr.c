/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:18:48 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/18 15:45:12 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;
	size_t	j;

	i = 0;
	j = 0;
	if (start >= ft_strlen(s) || !s || !len)
	{
		sub = malloc(1 * sizeof(char));
		sub[0] = '\0';
		return (sub);
	}
	while (s[start + j] != '\0' && j < len)
		j++;
	sub = malloc((j + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	while (s[start] != '\0' && len-- > 0)
	{
		sub[i] = s[start];
		start++;
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
