/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 17:31:44 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/21 10:09:24 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	n;
	int	neg;
	int	result;

	n = 0;
	neg = 1;
	result = 0;
	while ((str[n] >= 9 && str[n] <= 13) || str[n] == 32)
		n++;
	while (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			neg *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		result *= 10;
		result += str[n] - '0';
		n++;
	}
	return (result * neg);
}
/*
int	main(void)
{
	char	test1[] = "------123as45";
	char	test2[]	= "-+-+-++3456";
	char	test3[] = "++++567";

	printf("%d\n", ft_atoi(test1));
	printf("%d\n", ft_atoi(test2));
	printf("%d\n", ft_atoi(test3));
}*/
