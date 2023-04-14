/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfrancis <gfrancis@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:42:03 by gfrancis          #+#    #+#             */
/*   Updated: 2023/04/14 15:30:59 by gfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int	ft_isalpha(int c);
size_t		ft_strlen(const char *s);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(char *str);
char	*ft_strdup(char *src);
int	ft_toupper(int ch);
int ft_tolower(int ch);

#endif
