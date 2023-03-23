/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:58:41 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/23 09:55:35 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr_s;
	size_t				i;

	ptr_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*ptr_s == (unsigned char)c)
			return ((void *)ptr_s);
		i++;
		ptr_s++;
	}
	return (NULL);
}
