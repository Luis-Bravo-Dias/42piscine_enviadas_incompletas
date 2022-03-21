/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:22:45 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/10 11:25:27 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	e;
	int	d;

	e = -1;
	while (e++ < 98)
	{
		d = e;
		while (d++ < 99)
		{
			ft_putchar(e / 10 + '0');
			ft_putchar(e % 10 + '0');
			ft_putchar(' ');
			ft_putchar(d / 10 + '0');
			ft_putchar(d % 10 + '0');
			if (e != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
