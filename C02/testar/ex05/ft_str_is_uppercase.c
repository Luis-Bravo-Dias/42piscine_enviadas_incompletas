/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:57:13 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:29:19 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 65 || str[n] > 90)
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
	char tag2[] = "BANG";
	char tag3[] = "BOOOOOooooom";
	printf("%d\n",ft_str_is_uppercase(tag));
	printf("%d\n",ft_str_is_uppercase(tag2));
	printf("%d",ft_str_is_uppercase(tag3));
}*/
