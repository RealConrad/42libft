/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:36:32 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/23 09:57:24 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		k;

	i = 0;
	k = 0;
	if (!*needle)
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[k])
		{
			while ((i + k) < len && haystack[i + k] == needle[k])
			{
				k++;
				if (!needle[k])
					return ((char *)haystack + i);
			}
			k = 0;
		}
		i++;
	}
	return (0);
}
