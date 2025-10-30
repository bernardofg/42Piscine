/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:43:52 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:43:53 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	counter;

	counter = 0;
	i = 1;
	if (nb < 2)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			counter++;
		i++;
	}
	if (counter == 2)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int	nb;
	nb = ft_is_prime(2);
	printf("%d\n", nb);
	return (0);
}
*/
