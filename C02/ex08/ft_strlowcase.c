/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 12:23:09 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 12:19:42 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'A' && str[n] <= 'Z')
			str[n] += 32;
		n++;
	}
	return (str);
}
/*
int main()
{
	char tag[] = "LuIs";
	char tag2[] = "luis";
	char tag3[] = "KASU251";
	ft_strlowcase(tag);
	ft_strlowcase(tag2);
	ft_strlowcase(tag3);
	printf("%s\n", tag);
	printf("%s\n", tag2);
	printf("%s", tag3);
}*/
