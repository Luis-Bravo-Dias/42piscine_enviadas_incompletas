/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:38:02 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:06:37 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char	*src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	string1[] = "Yorozuya";
	char	string2[] = "";

	printf("Primeiro string: ");
	printf("%s", string1);
	printf("\n");
	ft_strcpy(string2, string1);
	printf("Segundo string: ");
	printf("%s", string2);
}*/
