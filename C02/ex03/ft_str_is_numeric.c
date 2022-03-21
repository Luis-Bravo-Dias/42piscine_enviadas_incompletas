/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 15:30:06 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:48:43 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 48 || str[n] > 57)
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
	char tag2[] = "Luis";
	char tag3[] = "kasu251";
	printf("%d\n",ft_str_is_numeric(tag));
	printf("%d\n",ft_str_is_numeric(tag2));
	printf("%d",ft_str_is_numeric(tag3));

}*/
