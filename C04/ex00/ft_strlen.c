/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 14:31:56 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/18 14:44:14 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}
/*
int	main(void)
{
	printf("%d\n", ft_strlen("Yorozuya"));
	printf("%d", ft_strlen("Luis"));
}*/
