/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:36:32 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/22 14:48:00 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
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
			while ((i + k) < len && haystack[i + k] == needle[k]) //check matching characters between haystack needle
			{
				k++;
				if (!needle[k])
					return ((char *)haystack + i);
			}
			k = 0; // reset k if we didn't find the needle
		}
		i++;
	}
	return (0);
}