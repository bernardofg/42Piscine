/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:43:46 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:55:20 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	size;

	size = argc - 1;
	while (size >= 1)
	{
		i = 0;
		while (argv[size][i] != '\0')
		{
			ft_putchar (argv[size][i]);
			i++;
		}
		write (1, "\n", 1);
		size--;
	}
	return (0);
}
