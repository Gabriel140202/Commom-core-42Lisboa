/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:27:14 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/13 15:53:43 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int	main(void)
{
	char	*str;
	printf("Insira:");
	scanf("%s", str);

	printf("%zu", ft_strlen("teste"));
}