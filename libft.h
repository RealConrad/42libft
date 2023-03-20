/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:54:15 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/20 15:52:50 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H_
#define _LIBFT_H_
#include <unistd.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(char *str);
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, char *src, size_t size);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
