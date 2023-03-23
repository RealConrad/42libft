/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:28:03 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/23 09:56:34 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
