/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:54:01 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/11 15:54:01 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write (1, &c, 1);
}

void    ft_print_comb2(void)
{
    int    a;
    int    b;

    a = 0;
    b = 1;
    while (a <= 98)
    {
        while (b <= 99)
        {
            ft_putchar(a / 10 + '0');
            ft_putchar(a % 10 + '0');
            ft_putchar(' ');
            ft_putchar(b / 10 + '0');
            ft_putchar(b % 10 + '0');
            if (a / 10 != 9 || a % 10 != 8)
            {
                write (1, ", ", 2);
            }
            b++;
        }
        a++;
        b = a + 1;
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}