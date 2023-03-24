/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 13:16:16 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/23 15:25:00 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*str;
	size_t	length;

	length = ft_strlen(s1) + 1;
	copy = (char *)malloc(sizeof(char) * length);
	str = copy;
	if (!copy)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	*str = '\0';
	return (copy);
}
