/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:43:22 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:43:23 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	if (power == 1)
	{
		return (nb);
	}
	return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>
int	main()
{	
	int	nb;
	nb = ft_recursive_power(2, 3);
	printf ("%d\n", nb);
	return (0);
}
*/
