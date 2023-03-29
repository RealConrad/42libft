/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 16:58:21 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/29 17:29:03 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
** @brief Outputs the char 'c' to the file descriptor
** @param c The char to be output
** @param fd The file descriptor on which to write
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
