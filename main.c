/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwenz <cwenz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:03:36 by cwenz             #+#    #+#             */
/*   Updated: 2023/03/20 11:24:21 by cwenz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcpy_test(void);
int ft_strlcat_test(void);

int main(void)
{
    char myString[] = "Hello this is my very long string";
	char myString2[] = "Hello, this is string 2";
	char src[] = "Hello";
	char dest[] = "Dest";
	
	// column 1
	printf("ft_isalpha: %d\n", ft_isalpha('i'));
	printf("ft_isdigit: %d\n", ft_isdigit('5'));
	printf("ft_isalnum: %d\n", ft_isalnum('3'));
    printf("ft_isascii: %d\n", ft_isascii(' '));
    printf("ft_isprint: %d\n", ft_isprint('0x7f'));
	printf("ft_strlen: %lu\n", ft_strlen("Hello"));
	printf("ft_memset: %s\n", ft_memset(myString, '?', 5));
	printf("ft_bzero: %s\n", myString2);
	printf("ft_strlcpy: %zu\n", ft_strlcpy(dest, src, 3));
	printf("Dest: %s\n", dest);
	ft_memcpy_test();
	ft_strlcat_test();

	printf("------------------------------\n");

	//column 2
	printf("ft_toupper: %c\n", ft_toupper('a'));
	printf("ft_tolower: %c\n", ft_tolower('A'));

    return (0);
}

int	ft_memcpy_test(void)
{
	//TESTS
	char dest1[] = "H";
	char src1[] = "This is src";
	char dest2[] = "D";
	char src2[] = "Src2";
	memcpy(dest1, src1, 1);
	ft_memcpy(dest2, src2, 1);
	printf("Dest1 with memcpy: %s\n", dest1);
	printf("Dest2 with ft_memcpy: %s\n", dest2);

	return (0);
}

int ft_strlcat_test(void)
{
	char src[] = "World";
	char dest[] = "Hello";

	char src2[] = "World";
	char dest2[] = "Hello";

	strlcat(dest2, src2, 5);
	ft_strlcat(dest, src, 7);
	printf("ft_strlcat test with ft_strlcat: %s\n", dest);
	printf("ft_strlcat test with strlcat: %s\n", dest2);

	return (0);
}