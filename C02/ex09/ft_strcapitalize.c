/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:38:06 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 09:38:00 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] >= 'a' && str[n] <= 'z')
		{
			if (!((str[n - 1] >= 'a' && str[n - 1] <= 'z')
					|| (str[n - 1] >= '0' && str[n - 1] <= '9')
					|| (str[n - 1] >= 'A' && str[n - 1] <= 'Z')))
				str[n] -= 32;
		}
		if (str[n] >= 'A' && str[n] <= 'Z')
		{
			if ((str[n - 1] >= 'a' && str[n - 1] <= 'z')
				|| (str[n - 1] >= '0' && str[n - 1] <= '9')
				|| (str[n - 1] >= 'A' && str[n - 1] <= 'Z'))
				str[n] += 32;
		}
		n++;
	}
	return (str);
}
/*
int main()
{
	char tag[] = "oi, tudo bem? 42palAvras quar3Nta-e-duas; cinquenta+e+um";
	char tag2[] = "luisihahahahahahahahahkhdskdshds jKagja jhvsjhds -jhvj 2jkdfnv";
	char tag3[] = "KS FG{H 51FF mm[mff;sFTbbs";
	ft_strcapitalize(tag);
	ft_strcapitalize(tag2);
	ft_strcapitalize(tag3);
	printf("%s\n", tag);
	printf("%s\n", tag2);
	printf("%s", tag3);
}*/
