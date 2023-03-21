/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:45:22 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/17 19:53:15 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*ch;

	ch = str;
	i = 0;
	while (i < len)
	{
		ch[i] = c;
		i++;
	}
	return (str);
}