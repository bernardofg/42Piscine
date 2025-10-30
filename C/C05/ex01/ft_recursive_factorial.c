/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 11:42:55 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/04 11:42:59 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	n;

	n = 5;
	i = 0;
	printf("factorial %d\n", ft_recursive_factorial(n));
}
*/
/*factorial: if (nb = 5) = ( 5 - 1) * 5 = 4 * 5......
	5 = 5*4*3*2*1 = 120;
*/
