/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:56:08 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/29 18:16:30 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
** @brief Outputs the integer 'n' to the given file descriptor
** @param n The integer to output
** @param fd The file descriptor to output 'n' to
*/
void	ft_putnbr_fd(int n, int fd)
{
	char	*num_as_char;

	num_as_char = ft_itoa(n);
	ft_putstr_fd(num_as_char, fd);
}
