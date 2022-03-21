/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 18:33:13 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 09:51:22 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int	size)
{
	unsigned int	n;
	unsigned int	src_len;

	n = 0;
	src_len = ft_strlen(src);
	if (size != 0)
	{
		while (src[n] != '\0' && n < size - 1)
		{
			dest[n] = src[n];
			n++;
		}
		dest[n] = '\0';
	}
	return (src_len);
}
/*
int main(void)
{
		char text1[] = "12345";
		char text2[] = "abcde";
		printf("%lu\n", strlcpy(text1, text2, 5));
		printf("%s\n", text1);
		char text3[] = "12345";
		char text4[] = "abcde";
		printf("%u\n", ft_strlcpy(text3, text4, 5));
		printf("%s\n", text3);
}*/
