/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:04:42 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:59:24 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] -= 32;
		n++;
	}
	return (str);
}
/*
int main()
{
	char tag[] = "LuIs";
	char tag2[] = "luis";
	char tag3[] = "kasu251";
	ft_strupcase(tag);
	ft_strupcase(tag2);
	ft_strupcase(tag3);
	printf("%s\n", tag);
	printf("%s\n", tag2);
	printf("%s", tag3);
}*/
