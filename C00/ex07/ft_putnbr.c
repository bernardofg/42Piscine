/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:15:33 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/11 16:15:33 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
        return ;
    }
    if (nb < 0)
    {
        nb = -nb;
        write (1, "-", 1);
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
    }
        nb = nb % 10 + '0';
        write (1, &nb, 1);
}
#include <stdio.h>

int main(void)
{
    int nb = 341;
    ft_putnbr(nb);
}
