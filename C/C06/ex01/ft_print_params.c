/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:26:27 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/30 22:06:07 by bfantine         ###   ########.fr       */
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
	int	j;

	(void)argc;
	j = 1;
	while (argv[j] != NULL)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar (argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
