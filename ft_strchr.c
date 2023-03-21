/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:18:36 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/21 15:48:48 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr_s;

	ptr_s = (char *) s;
	if (*ptr_s == (char)c)
		return (ptr_s);
	while (*ptr_s++)
		if (*ptr_s == (char)c)
			return (ptr_s);
	return (0);
}
