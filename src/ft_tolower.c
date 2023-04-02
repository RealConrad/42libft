/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 09:18:14 by cwenz             #+#    #+#             */
/*   Updated: 2023/04/02 16:47:05 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
** @brief Converts an uppercase char to lowercase
** @param c The char to convert
** @return The char 'c'
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int main()
{
	printf("%c\n", ft_tolower('G'));
	return (0);
}
*/
