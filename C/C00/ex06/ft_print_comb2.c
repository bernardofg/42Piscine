/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:06:43 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/06 17:56:15 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar (a / 10 + '0');
			ft_putchar (a % 10 + '0');
			ft_putchar (' ');
			ft_putchar (b / 10 + '0');
			ft_putchar (b % 10 + '0');
			if (a / 10 != 9 || a % 10 != 8)
			{
				write(1, ",  ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
