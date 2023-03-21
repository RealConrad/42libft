/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:04:33 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/21 11:01:41 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_src;
	char	*ptr_dest;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	i = n;
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		while (i--)
			*ptr_dest++ = *ptr_src++;
	else
	{
		while (i > 0)
		{
			ptr_dest[i - 1] = ptr_src[i - 1];
			i--;
		}
	}
	return (dest);
}
