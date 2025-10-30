/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:44:06 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:44:07 by bfantine         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (ft_is_prime(nb) == 0)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
    int nb = 24;
    nb = ft_find_next_prime(nb); 
    printf("%d\n", nb);
    return 0;
}
*/
