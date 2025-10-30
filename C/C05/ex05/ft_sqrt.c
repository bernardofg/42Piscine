/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:43:44 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 21:32:02 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		else if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	nb = ft_sqrt(4);
	printf("%d\n", nb);
	return (0);
}
*/
