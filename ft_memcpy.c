/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 18:59:12 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/20 14:44:43 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptr_src;
	char			*ptr_dest;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	i = 0;
	if (ptr_dest[i] == '\0')
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	TESTS
	char dest1[1] = "H";
	char src1[] = "This is src";
	char dest2[1] = "D";
	char src2[] = "Src2";
	memcpy(dest1, src1, 5);
	ft_memcpy(dest2, src2, 5);
	printf("Dest1 with memcpy: %s\n", dest1);
	printf("Dest2 with ft_memcpy: %s\n", dest2);

	return (0);
}
*/