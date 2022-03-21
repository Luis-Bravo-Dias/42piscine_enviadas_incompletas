/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:18:28 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 10:25:34 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	p;

	if (nb < 0)
	{
		p = (unsigned int)(-nb);
		ft_putchar('-');
	}
	else
		p = (unsigned int)nb;
	if (p >= 10)
	{
		ft_putnbr(p / 10);
		ft_putnbr(p % 10);
	}
	else
		ft_putchar(p + '0');
}
/*
int main(void)
{
	ft_putnbr(-2147483647);
	return (0);
}*/
