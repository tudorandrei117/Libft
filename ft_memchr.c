/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:08:02 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 11:40:13 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*source;
	size_t	i;

	source = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return (source + i);
		i++;
	}
	return (0);
}

/* #include "stdio.h"

/* int main()
{
const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 20);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
} */ 