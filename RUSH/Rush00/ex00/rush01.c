/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thribeir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 02:04:55 by thribeir          #+#    #+#             */
/*   Updated: 2025/07/20 03:13:32 by thribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	w_line(int a, int l, int i, int j)
{
	if (i == 1)
	{
		if (j == 1)
			ft_putchar('/');
		else if (j == l)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (i == a)
	{
		if (j == 1)
			ft_putchar('\\');
		else if (j == l)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else
	{
		if (j == 1 || j == l)
			ft_putchar('*');
		else
			ft_putchar(' ');
	}
}

void	rush(int l, int a)
{
	int	i;
	int	j;

	if (a < 0 || l < 0)
	{
		write(1, "Números inválidos", 19);
		return ;
	}
	i = 1;
	j = 1;
	while (i <= a)
	{
		j = 1;
		while (j <= l)
		{
			w_line(a, l, i, j);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
