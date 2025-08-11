/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:36:58 by bfantine          #+#    #+#             */
/*   Updated: 2025/08/11 15:36:58 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    if (n >= 0)
        write (1, "P", 1);
    else
        write (1, "N", 1);
}
/*
int main(void)
{
    ft_is_negative(-3);
    return (0);
}
*/