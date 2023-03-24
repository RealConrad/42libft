/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 10:26:14 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/24 17:20:40 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	if (!s1 || !set)
		return (NULL);
	k = 0;
	while (ft_strchr(set, s1[k]) && s1[k])
		k++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i > k)
		i--;
	return (ft_substr(s1, i, (k + 1) - i));
}

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char	*str;
// 	char	*temp;
// 	size_t	i;
// 	size_t	j;

// 	if (!s1 || !set)
// 		return (NULL);
// 	str = (char *)malloc(sizeof(char *) * ((ft_strlen(s1) - ft_strlen(set)) + 1));
// 	if (!str)
// 		return (NULL);
// 	temp = str;
// 	i = 0;
// 	j = 0;
// 	while (s1[i])
// 	{
// 		if (s1[i] == set[j])
// 		{
// 			j++;
// 			continue ;
// 		}
// 		temp[i] = s1[i];
// 		printf("Char: %c\n", s1[i]);
// 		i++;
// 	}
// 	printf("2nd Str: %s\n", str);
// 	return (str);
// }

// int main()
// {
// 	ft_strtrim("This is my string", "my");
// 	return (0);
// }
