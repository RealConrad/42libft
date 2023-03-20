/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 08:48:07 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/20 19:02:19 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*ptr_src;
	char			*ptr_dest;

	ptr_src = (char *)src;
	ptr_dest = (char *)dest;
	i = -1;
	if (dest < src)
	{
		while (++i < n && n != 0)
			ptr_dest[i] = ptr_src[i];
	}
	else
	{
		i = n;
		while (i > 0 && n != 0)
		{
			ptr_dest[i - 1] = ptr_src[i - 1];
			i--;

		}
	}
	return (dest);
}

/*
int main(void)
{
	char src1[] = "Hello Conrad";
	// char dest1[] = "Another String";

	char src2[] = "Hello Conrad";
	// char dest2[] = "Another String";

	memmove(src1 + 5, src1 + 2, 5);
	ft_memmove(src2 + 5, src2 + 2, 5);
	printf("Dest1: %s\n", src1);
	printf("Dest2: %s\n", src2);
	return (0);
}
*/
  