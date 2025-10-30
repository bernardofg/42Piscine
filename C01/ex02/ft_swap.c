/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:48:02 by bfantine          #+#    #+#             */
/*   Updated: 2025/07/22 20:28:12 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
	int x = '2';
	int y = '3';
	ft_swap(&x, &y); //Pass the address of x and y to the ft_swap function
	write(1, &x, 1);
	write(1, &y, 1);
	return (0);
}
*/
