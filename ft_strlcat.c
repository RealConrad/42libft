/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 14:28:14 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/20 19:44:45 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	// int i;
	// int j;
	// int src_length;

	// i = 0;
	// j = 0;
	// src_length = ft_strlen(src);
	// while (dest[i] && size > 0)
	// {
	// 	i++;
	// 	size--;
	// }
	// while (src[j] && size > 0)
	// {
	// 	dest[i + 1] = src[j];
	// 	j++;
	// }
	// dest[i + j] = '\0';
	// return (i + src_length);
	unsigned int i;
	unsigned int dest_len;
	unsigned int src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);0
	i = 0;
	while (src[i] && size - 1 > 0)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (size < dest_len)
		return (size + src_len);
	return (src_len + dest_len);
}

int main(void)
{
	char src[] = "This is Src";
	char dest[15] = "This is Dest";
	char dest2[15] = "This is Dest";

	printf("Src_Len: %zu\n", ft_strlen(src));
	printf("Dest_Len: %zu\n", ft_strlen(dest));
	printf("Original: %s\t %zu\n", dest, strlcat(dest, src, 15));
	printf("My func: %s\t %zu\n", dest2, ft_strlcat(dest2, src, 15));
	return (0);
}
