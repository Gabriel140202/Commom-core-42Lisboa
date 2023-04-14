/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:01:14 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/14 18:20:33 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char			*buffer1;
	unsigned char			*buffer2;

	i = n;
	buffer1 = (unsigned char *)src;
	buffer2 = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	else if (buffer2 > buffer1)
	{
		while (i > 0)
		{
			*(buffer2 + i) = *(buffer1 + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(buffer2 + i) = *(buffer1 + i);
			i++;
		}
	}
	return (buffer2);
}