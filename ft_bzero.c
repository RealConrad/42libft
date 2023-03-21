/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:57:41 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/21 16:16:46 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ch;
	size_t			i;

	i = 0;
	ch = str;
	while (i < n)
	{
		ch[i] = 0;
		i++;
	}
}
