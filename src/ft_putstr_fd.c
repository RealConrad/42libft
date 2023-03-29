/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:30:04 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/29 17:41:38 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
** @brief Outputs the string 's' to the given file descriptor
** @param s The string to ouput
** @param fd The file descriptor to which to write to
*/
void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		if (s[i] >= 0 && s[i] <= 127)
		{
			write(fd, &s[i], 1);
		}
		i++;
	}
}
