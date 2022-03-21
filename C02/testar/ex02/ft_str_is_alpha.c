/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 13:37:45 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 11:46:20 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] < 65 || str[n] > 90) && (str[n] < 97 || str[n] > 122))
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
	char tag[] = "Lu*&is";
	printf("%d\n",ft_str_is_alpha(tag));
	char tag2[] = "Luis";
	printf("%d",ft_str_is_alpha(tag2));

}*/
