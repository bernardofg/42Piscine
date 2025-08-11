/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:35:16 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/11 15:35:16 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
    char    nb;
    
    nb = '0';
    while (nb <= '9')
    {
        write (1, &nb, 1);
        nb++;
    }
}
/*
int main(void)
{
    ft_print_numbers();
    return (0);
}
*/