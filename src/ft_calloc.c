/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 09:12:19 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/29 02:24:41 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
** @brief allocates a block of memory for an array of elements, initializes 
** the memory to zero, and returns a pointer to the first element 
** of the allocated space
** @param count Number of elements to allocate memory
** @param size Size for each element
** @return Returns a pointer to the allocated memory or NULL if not found
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total;

	total = count * size;
	p = malloc(total);
	if (!p)
		return (NULL);
	if (p)
		ft_bzero(p, total);
	return (p);
}
