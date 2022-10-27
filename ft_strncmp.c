/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tburlacu <tburlacu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:40:33 by tburlacu          #+#    #+#             */
/*   Updated: 2022/10/27 11:39:14 by tburlacu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] && str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		else
		{
			return (0);
		}
		i++;
	}
}

/* #include "stdio.h"

int main()
{
   char str1[] = "abcdef";
   char str2[] = "abcd";
   char str3[] =  "ghi";
   int i, j, k;
	
   i = ft_strncmp(str1, str2, 4);		
   printf("\n The Comparison of str1 and str2 Strings = %d", i);
 	
   j = ft_strncmp(str1, str2, 6);		
   printf("\n The Comparison of str1 and str2 Strings = %d", j);
   
   k = ft_strncmp(str1, str3, 3);		
   printf("\n The Comparison of str1 and str3 = %d", k);
}
 */