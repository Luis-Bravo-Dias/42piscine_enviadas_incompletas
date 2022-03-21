/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 19:14:43 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:55:28 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] < 32 || str[n] > 126)
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
	char tag3[] = "à";
	printf("%d\n",ft_str_is_printable(tag));
	printf("%d\n",ft_str_is_printable(tag2));
	printf("%d",ft_str_is_printable(tag3));
}*/
