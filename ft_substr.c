/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:20:39 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/23 15:48:35 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	char			*copy;
	unsigned int	i;
	unsigned int	j;

	i = start;
	j = 0;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy || !s || start >= ft_strlen(s))
		return (NULL);
	p = copy;
	while (s[i] && j < len)
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
