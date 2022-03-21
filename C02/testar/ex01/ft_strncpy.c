/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 11:14:06 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 09:33:02 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
int main(void)
{
	char string1[] = "Yorozuya";
	char string2[] = "OJIETRSA";
	printf("Primeiro string: ");
	printf("%s", string1);
	printf("\n");
	ft_strncpy(string2, string1, 4);
	printf("Segundo string: ");
	printf("%s\n", string2);
	printf("%c\n", string2[4]);
}*/
