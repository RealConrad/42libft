/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:28:03 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/21 16:26:05 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr_s;
	char	*return_val;

	return_val = NULL;
	ptr_s = (char *)s;
	if (*ptr_s == (char)c)
		return_val = ptr_s;
	while (*ptr_s++ != '\0')
	{
		if (*ptr_s == (char)c)
			return_val = ptr_s;
	}
	return (return_val);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char str[] = "Hello T\0here!";
// 	printf("Original: %s\n", strrchr(str, '\0'));
// 	printf("My Func: %s\n", ft_strrchr(str, '\0'));

// 	return (0);
// }
