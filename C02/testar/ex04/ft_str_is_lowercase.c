/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:15:02 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:52:20 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 97 || str[n] > 122)
		{
			return (0);
		}
		n++;
	}
	return (1);
}
/*
int main()
{
	char tag[] = "13";
	char tag2[] = "luis";
	char tag3[] = "BOOOOO$#$#&";
	printf("%d\n",ft_str_is_lowercase(tag));
	printf("%d\n",ft_str_is_lowercase(tag2));
	printf("%d",ft_str_is_lowercase(tag3));
}*/
