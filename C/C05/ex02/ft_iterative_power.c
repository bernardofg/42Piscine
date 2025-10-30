/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:43:13 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:43:15 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = nb;
	i = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0 || nb == 0)
	{
		return (1);
	}
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int     main()
{
        int     nb;
        nb = ft_iterative_power(5, 10);
        printf ("%d\n", nb);
        return (0);
}
*/
