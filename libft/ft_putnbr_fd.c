/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:25:56 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/17 17:11:16 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fb)
{
	if (nb <= INT_MAX && nb >= INT_MIN)
	{
		if (nb == INT_MIN)
		{
			ft_putchar_fd('-', fb);
			ft_putchar_fd('2', fb);
			ft_putnbr_fd(147483648, fb);
		}
		else if (nb < 0)
		{
			ft_putchar_fd('-', fb);
			ft_putnbr_fd(-nb, fb);
		}
		else if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fb);
			ft_putnbr_fd(nb % 10, fb);
		}
		else
		{
			ft_putchar_fd(nb + '0', fb);
		}
	}
}
